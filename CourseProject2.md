Impact of severe weather events on the U.S. population health and economy
========================================================


<br>
## Synopsis

This detailed analysis has been performed to fulfill the requirements of the second peer assessment for the course [Reproducible Research][1] offered by the [Johns Hopkins University][2] on [Coursera][3]. In this project, we will explore and analyse the U.S. National Oceanic and Atmospheric Administration's (NOAA) storm database. This database tracks characteristics of major storms and weather events in the United States, including when and where they occur, as well as estimates of any fatalities, injuries, and property damage.

The main objectives of this research are as follows
 - To find out which type of weather events, indicated by the `EVTYPE` variable, are the most harmful with respect to the population health in the U.S.
 - To find out which type of weather events have the greatest economic consequences in the U.S.

The key takeway from our analysis was
 - `TORNADO` is the most devastating weather event affecting the poplation health.
 - `FLOOD` has been responsible for causing the maximum property damage.
 - `DROUGHT` has been responsible for causing the maximum crop damage.


<br>
## Data Processing

This section consists of the steps followed to setup our R environment, get the required data, clean and process it.


#### <u>Setting up required environment in R</u>

In the following code segment, we set the required global options and load the required packages in R.

```r
opts_chunk$set(cache = TRUE, echo = TRUE)
options(scipen = 999, width = 100)
library(ggplot2)
library(reshape2)
library(gridExtra)
```

```
## Loading required package: grid
```

```r
library(pander)
```

```
## 
## Attaching package: 'pander'
## 
## The following object is masked from 'package:knitr':
## 
##     pandoc
```


<br>
#### <u>Setting the working directory</u>

Here we set the working directory as required, it can be changed according to your preference in your personal computer.

```r
setwd("C:/Users/abandi/Desktop/Coursera/Data Science Course/Reproducible Research/Course Project 2")
```


<br>
#### <u>Getting the required data</u>
We get the required data set by downloading it, in case it is not present in the working directory by using the following code segment.

```r
if (!file.exists("repdata-data-StormData.csv.bz2")) {
    download.file("https://d396qusza40orc.cloudfront.net/repdata%2Fdata%2FStormData.csv.bz2", destfile = "repdata-data-StormData.csv.bz2", 
        method = "curl")
}
```


<br>
#### <u>Loading the data</u>

Next, we read the file using appropriate functions and load in the data into the `stormData` data frame using the following code segment. We then look closely at the data set. It contains `902297` observations, where each observation is a row and `37` variables denoted by the columns. 

```r
stormData <- read.csv(bzfile("repdata-data-StormData.csv.bz2"), sep = ",", header = TRUE, stringsAsFactors = FALSE)
str(stormData)
```

```
'data.frame':	902297 obs. of  37 variables:
 $ STATE__   : num  1 1 1 1 1 1 1 1 1 1 ...
 $ BGN_DATE  : chr  "4/18/1950 0:00:00" "4/18/1950 0:00:00" "2/20/1951 0:00:00" "6/8/1951 0:00:00" ...
 $ BGN_TIME  : chr  "0130" "0145" "1600" "0900" ...
 $ TIME_ZONE : chr  "CST" "CST" "CST" "CST" ...
 $ COUNTY    : num  97 3 57 89 43 77 9 123 125 57 ...
 $ COUNTYNAME: chr  "MOBILE" "BALDWIN" "FAYETTE" "MADISON" ...
 $ STATE     : chr  "AL" "AL" "AL" "AL" ...
 $ EVTYPE    : chr  "TORNADO" "TORNADO" "TORNADO" "TORNADO" ...
 $ BGN_RANGE : num  0 0 0 0 0 0 0 0 0 0 ...
 $ BGN_AZI   : chr  "" "" "" "" ...
 $ BGN_LOCATI: chr  "" "" "" "" ...
 $ END_DATE  : chr  "" "" "" "" ...
 $ END_TIME  : chr  "" "" "" "" ...
 $ COUNTY_END: num  0 0 0 0 0 0 0 0 0 0 ...
 $ COUNTYENDN: logi  NA NA NA NA NA NA ...
 $ END_RANGE : num  0 0 0 0 0 0 0 0 0 0 ...
 $ END_AZI   : chr  "" "" "" "" ...
 $ END_LOCATI: chr  "" "" "" "" ...
 $ LENGTH    : num  14 2 0.1 0 0 1.5 1.5 0 3.3 2.3 ...
 $ WIDTH     : num  100 150 123 100 150 177 33 33 100 100 ...
 $ F         : int  3 2 2 2 2 2 2 1 3 3 ...
 $ MAG       : num  0 0 0 0 0 0 0 0 0 0 ...
 $ FATALITIES: num  0 0 0 0 0 0 0 0 1 0 ...
 $ INJURIES  : num  15 0 2 2 2 6 1 0 14 0 ...
 $ PROPDMG   : num  25 2.5 25 2.5 2.5 2.5 2.5 2.5 25 25 ...
 $ PROPDMGEXP: chr  "K" "K" "K" "K" ...
 $ CROPDMG   : num  0 0 0 0 0 0 0 0 0 0 ...
 $ CROPDMGEXP: chr  "" "" "" "" ...
 $ WFO       : chr  "" "" "" "" ...
 $ STATEOFFIC: chr  "" "" "" "" ...
 $ ZONENAMES : chr  "" "" "" "" ...
 $ LATITUDE  : num  3040 3042 3340 3458 3412 ...
 $ LONGITUDE : num  8812 8755 8742 8626 8642 ...
 $ LATITUDE_E: num  3051 0 0 0 0 ...
 $ LONGITUDE_: num  8806 0 0 0 0 ...
 $ REMARKS   : chr  "" "" "" "" ...
 $ REFNUM    : num  1 2 3 4 5 6 7 8 9 10 ...
```


<br>
#### <u>Subsetting the data</u>

Looking closely at the above data set details, we pick several variables which are of our interest, namely
```
 INJURIES   :   This indicates Event-related injuries
 FATALITIES :   This indicates Event-related fatalities
 PROPDMG    :   This indicates the property damage amount
 CROPDMG    :   Crop damage amount
 PROPDMGEXP :   Property damage units
 CROPDMGEXP :   Crop damage units
 
``` 

The above variables will be mainly used for the analysis based on the questions defined in our objective earlier. Next, we subset our `stormData` data frame to get a data frame `stormDataSubset` with the necessary variables, such that none of its rows i.e, observations have zero injuries or fatalities or damages. The code segment below shows the operations which were performed and the data set we obtain consists of `254633` rows of observations and `7` variables as the columns.

```r
stormDataSubset <- subset(x = stormData, subset = INJURIES > 0 | FATALITIES > 0 | PROPDMG > 0 | CROPDMG > 
    0, select = c("EVTYPE", "FATALITIES", "INJURIES", "PROPDMG", "PROPDMGEXP", "CROPDMG", "CROPDMGEXP"))
str(stormDataSubset)
```

```
'data.frame':	254633 obs. of  7 variables:
 $ EVTYPE    : chr  "TORNADO" "TORNADO" "TORNADO" "TORNADO" ...
 $ FATALITIES: num  0 0 0 0 0 0 0 0 1 0 ...
 $ INJURIES  : num  15 0 2 2 2 6 1 0 14 0 ...
 $ PROPDMG   : num  25 2.5 25 2.5 2.5 2.5 2.5 2.5 25 25 ...
 $ PROPDMGEXP: chr  "K" "K" "K" "K" ...
 $ CROPDMG   : num  0 0 0 0 0 0 0 0 0 0 ...
 $ CROPDMGEXP: chr  "" "" "" "" ...
```


<br>
#### <u>Transforming the data</u>

Now, we will start operating on the data and transforming it into required formats to answer the questions in our main objective. 

<br>
#### First Objective
In the following segment, we will perform necessary steps to answer the objective of finding out, which types of weather events are most harmful to the human health.

Looking closely at the variables, we notice that to answer this question, there are two variables of interest namely, `FATALITIES` and `INJURIES` which we will be looking into more closely.

Now, we aggregate the total injuries for each weather event type across the U.S. in the following code segment and subset the events, only for which the number of injuries is atleast `1`

```r
totalInjuries <- aggregate(INJURIES ~ EVTYPE, data = stormDataSubset, FUN = sum)
totalInjuries <- totalInjuries[totalInjuries$INJURIES > 0, ]
str(totalInjuries)
```

```
'data.frame':	158 obs. of  2 variables:
 $ EVTYPE  : chr  "AVALANCHE" "BLACK ICE" "BLIZZARD" "blowing snow" ...
 $ INJURIES: num  170 24 805 1 13 2 2 5 1 1 ...
```



Next, we aggregate the total fatalities for each weather event type across the U.S. in the following code segment and subset the events, only for which the number of fatalities is atleast `1`

```r
totalFatalities <- aggregate(FATALITIES ~ EVTYPE, data = stormDataSubset, FUN = sum)
totalFatalities <- totalFatalities[totalFatalities$FATALITIES > 0, ]
str(totalFatalities)
```

```
'data.frame':	168 obs. of  2 variables:
 $ EVTYPE    : chr  "AVALANCE" "AVALANCHE" "BLACK ICE" "BLIZZARD" ...
 $ FATALITIES: num  1 224 1 101 1 1 3 2 1 3 ...
```


<br>
#### Second Objective
In the next segment, we will perform necessary steps to answer the objective of finding out, which types of weather events have the greatest economic consequences.

Looking closely at the variables, we notice that to answer this question, there are two variables of interest namely, `PROPDMG` and `CROPDMG` which we will be looking into more closely.

Now, the variables, `PROPDMGEXP` and `CROPDMGEXP` have different values which we can observe from the following code segments.
For `PROPDMGEXP` we see the following exponent values, here we have decided to use the following strategy, from the variable descriptions in the codebook and some assumptions

```
 '-' or '+' or ""  -  Leave PROPDMG as it is
 '0' - '7'         -  Multiply PROPDMG by 1eN i.e, 10^N where N belongs to {0,2,3,4,5,6,7}
 'B'               -  Multiply PROPDMG by 1e9 i.e, 10^9
 'h' or 'H'        -  Multiply PROPDMG by 1e2 i.e, 100
 'K'               -  Multiply PROPDMG by 1e3 i.e, 1000
 'm' or 'M'        -  Multiply PROPDMG by 1e6 i.e, 10^6
 
```

We take the multipliers based on the distinct exponent labels shown in the code segment below.

```r
t <- table(stormDataSubset$PROPDMGEXP)
names(t) <- c("\"\"", "-", "+", "0", "2", "3", "4", "5", "6", "7", "B", "h", "H", "K", "m", "M")
pandoc.table(t, style = "grid", justify = "left", caption = "PROPDMGEXP label frequencies")
```

```
+-------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
| ""    | -   | +   | 0   | 2   | 3   | 4   | 5   | 6   | 7   | B   |
+=======+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+
| 11585 | 1   | 5   | 210 | 1   | 1   | 4   | 18  | 3   | 3   | 40  |
+-------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
Table: PROPDMGEXP label frequencies (continued below)
 
+-----+-----+--------+-----+-------+
| h   | H   | K      | m   | M     |
+=====+=====+========+=====+=======+
| 1   | 6   | 231428 | 7   | 11320 |
+-----+-----+--------+-----+-------+
```


<br>
For `CROPDMGEXP` we see the following exponent values, here we have decided to use the following strategy, from the variable descriptions in the codebook and some assumptions

```
 '?' or ""  -  Leave CROPDMG as it is
 '0'        -  Multiply CROPDMG by 1eN i.e, 10^N where N belongs to {0}
 'B'        -  Multiply CROPDMG by 1e9 i.e, 10^9
 'k' or 'K' -  Multiply CROPDMG by 1e3 i.e, 1000
 'm' or 'M' -  Multiply CROPDMG by 1e6 i.e, 10^6
 
```

We take the multipliers based on the distinct exponent labels shown in the code segment below.

```r
t <- table(stormDataSubset$CROPDMGEXP)
names(t) <- c("\"\"", "?", "0", "B", "k", "K", "m", "M")
pandoc.table(t, style = "grid", justify = "left", caption = "CROPDMGEXP label frequencies")
```

```
+--------+-----+-----+-----+-----+-------+-----+------+
| ""     | ?   | 0   | B   | k   | K     | m   | M    |
+========+=====+=====+=====+=====+=======+=====+======+
| 152664 | 6   | 17  | 7   | 21  | 99932 | 1   | 1985 |
+--------+-----+-----+-----+-----+-------+-----+------+
Table: CROPDMGEXP label frequencies
```

```r
```


<br>
Now we transform the values of `PROPDMGEXP` based on the key to proper numeric multipliers in the following code segment. 

```r
multiplierKey <- c(`-` = 1, `+` = 1, `0` = 1, `2` = 100, `3` = 1000, `4` = 10000, `5` = 100000, `6` = 1000000, 
    `7` = 10000000, B = 1000000000, h = 100, H = 100, K = 1000, m = 1000000, M = 1000000)
propdmgMultiplier <- multiplierKey[as.character(stormDataSubset$PROPDMGEXP)]
propdmgMultiplier[is.na(propdmgMultiplier)] <- 1
pandoc.table(table(propdmgMultiplier), style = "grid", justify = "left", caption = "Property damage multiplier value frequencies")
```

```
+-------+-------+--------+---------+----------+-----------+------------+
| 1     | 100   | 1000   | 10000   | 100000   | 1000000   | 10000000   |
+=======+=======+========+=========+==========+===========+============+
| 11801 | 8     | 231429 | 4       | 18       | 11330     | 3          |
+-------+-------+--------+---------+----------+-----------+------------+
Table: Property damage multiplier value frequencies (continued below)
 
+--------------+
| 1000000000   |
+==============+
| 40           |
+--------------+
```


After getting the multiplier values above, we multiply it with the respective `PROPDMG` values to obtain the actual value of property damage caused by the different weather event types.

```r
stormDataSubset$propertyDamage <- stormDataSubset$PROPDMG * propdmgMultiplier
propertyDamages <- aggregate(propertyDamage ~ EVTYPE, data = stormDataSubset, FUN = sum)
propertyDamages <- propertyDamages[propertyDamages$propertyDamage > 0, ]
str(propertyDamages)
```

```
'data.frame':	406 obs. of  2 variables:
 $ EVTYPE        : chr  "   HIGH SURF ADVISORY" " FLASH FLOOD" " TSTM WIND" " TSTM WIND (G45)" ...
 $ propertyDamage: num  200000 50000 8100000 8000 5000 ...
```



<br>
Now we transform the values of `CROPDMGEXP` based on the key to proper numeric multipliers in the following code segment. 

```r
multiplierKey <- c(`?` = 1, `0` = 1, B = 1000000000, k = 1000, K = 1000, m = 1000000, M = 1000000)
cropdmgMultiplier <- multiplierKey[as.character(stormDataSubset$CROPDMGEXP)]
cropdmgMultiplier[is.na(cropdmgMultiplier)] <- 1
pandoc.table(table(cropdmgMultiplier), style = "grid", justify = "left", caption = "Crop damage multiplier value frequencies")
```

```
+--------+--------+-----------+--------------+
| 1      | 1000   | 1000000   | 1000000000   |
+========+========+===========+==============+
| 152687 | 99953  | 1986      | 7            |
+--------+--------+-----------+--------------+
Table: Crop damage multiplier value frequencies
```


After getting the multiplier values above, we multiply it with the respective `CROPDMG` values to obtain the actual value of property damage caused by the different weather event types.

```r
stormDataSubset$cropDamage <- stormDataSubset$CROPDMG * cropdmgMultiplier
cropDamages <- aggregate(cropDamage ~ EVTYPE, data = stormDataSubset, FUN = sum)
cropDamages <- cropDamages[cropDamages$cropDamage > 0, ]
str(cropDamages)
```

```
'data.frame':	136 obs. of  2 variables:
 $ EVTYPE    : chr  "AGRICULTURAL FREEZE" "BLIZZARD" "COASTAL FLOODING" "COLD AIR TORNADO" ...
 $ cropDamage: num  28820000 112060000 56000 50 66000000 ...
```



<br>
## Analysis and Results

In this section, we will be analyzing the data we transformed and prepared in the previous section to answer the questions pertaining to our two main objectives. First, we will try to analyze the data to answer our first objective, which is to find out which weather event types affect population health the most. 

The following code segment shows us the top ten weather event types, which have been responsible for causing the most population injuries in the U.S. 

```r
injuries <- totalInjuries[order(totalInjuries$INJURIES, decreasing = T), ][1:10, ]
row.names(injuries) <- NULL
pandoc.table(injuries, style = "grid", justify = "left", caption = "Top ten weather events causing most injuries")
```

```
+-------------------+------------+
| EVTYPE            | INJURIES   |
+===================+============+
| TORNADO           | 91346      |
+-------------------+------------+
| TSTM WIND         | 6957       |
+-------------------+------------+
| FLOOD             | 6789       |
+-------------------+------------+
| EXCESSIVE HEAT    | 6525       |
+-------------------+------------+
| LIGHTNING         | 5230       |
+-------------------+------------+
| HEAT              | 2100       |
+-------------------+------------+
| ICE STORM         | 1975       |
+-------------------+------------+
| FLASH FLOOD       | 1777       |
+-------------------+------------+
| THUNDERSTORM WIND | 1488       |
+-------------------+------------+
| HAIL              | 1361       |
+-------------------+------------+
Table: Top ten weather events causing most injuries
```

From the above table, we see that `TORNADO` is the most harmful weather event causing maximum number of injuries.

<br>
The following code segment shows us the top ten weather event types, which have been responsible for causing the most population fatalities in the U.S. 

```r
fatalities <- totalFatalities[order(totalFatalities$FATALITIES, decreasing = T), ][1:10, ]
row.names(fatalities) <- NULL
pandoc.table(fatalities, style = "grid", justify = "left", caption = "Top ten weather events causing most fatalities")
```

```
+----------------+--------------+
| EVTYPE         | FATALITIES   |
+================+==============+
| TORNADO        | 5633         |
+----------------+--------------+
| EXCESSIVE HEAT | 1903         |
+----------------+--------------+
| FLASH FLOOD    | 978          |
+----------------+--------------+
| HEAT           | 937          |
+----------------+--------------+
| LIGHTNING      | 816          |
+----------------+--------------+
| TSTM WIND      | 504          |
+----------------+--------------+
| FLOOD          | 470          |
+----------------+--------------+
| RIP CURRENT    | 368          |
+----------------+--------------+
| HIGH WIND      | 248          |
+----------------+--------------+
| AVALANCHE      | 224          |
+----------------+--------------+
Table: Top ten weather events causing most fatalities
```

From the above table, we see that `TORNADO` is the most harmful weather event causing maximum number of injuries.

<br>
Now we combine the above two parameters, namely `INJURIES` and `FATALITIES` to also get the total damage caused by the different weather event types and sort them based on the total casualties which have been caused by the weather events and display the top ten most harmful weather event types on population health.

```r
healthData <- aggregate(cbind(FATALITIES, INJURIES) ~ EVTYPE, data = stormDataSubset, FUN = sum)
TOTAL <- healthData$FATALITIES + healthData$INJURIES
healthData <- cbind(healthData, TOTAL)
healthData <- healthData[order(healthData$TOTAL, decreasing = T), ]
topTenHealth <- healthData[1:10, ]
row.names(topTenHealth) <- NULL
pandoc.table(topTenHealth, style = "grid", justify = "left", caption = "Top ten weather events having harmful effects on population health")
```

```
+-------------------+--------------+------------+---------+
| EVTYPE            | FATALITIES   | INJURIES   | TOTAL   |
+===================+==============+============+=========+
| TORNADO           | 5633         | 91346      | 96979   |
+-------------------+--------------+------------+---------+
| EXCESSIVE HEAT    | 1903         | 6525       | 8428    |
+-------------------+--------------+------------+---------+
| TSTM WIND         | 504          | 6957       | 7461    |
+-------------------+--------------+------------+---------+
| FLOOD             | 470          | 6789       | 7259    |
+-------------------+--------------+------------+---------+
| LIGHTNING         | 816          | 5230       | 6046    |
+-------------------+--------------+------------+---------+
| HEAT              | 937          | 2100       | 3037    |
+-------------------+--------------+------------+---------+
| FLASH FLOOD       | 978          | 1777       | 2755    |
+-------------------+--------------+------------+---------+
| ICE STORM         | 89           | 1975       | 2064    |
+-------------------+--------------+------------+---------+
| THUNDERSTORM WIND | 133          | 1488       | 1621    |
+-------------------+--------------+------------+---------+
| WINTER STORM      | 206          | 1321       | 1527    |
+-------------------+--------------+------------+---------+
Table: Top ten weather events having harmful effects on population health
```

From the above table, we see that the top three weather event types most harmful to the population health are, `TORNADO`, `EXCESSIVE HEAT` and `TSTM WIND`.

The following code segment, plots a figure depicting the top ten most harmful weather events to the U.S. population health.
<br>

```r
plotHealth <- melt(topTenHealth[, c("EVTYPE", "TOTAL", "INJURIES", "FATALITIES")], id.vars = 1)
ggplot(plotHealth, aes(x = reorder(EVTYPE, -value), y = value)) + geom_bar(stat = "identity", aes(fill = variable), 
    position = "dodge") + theme(axis.text.x = element_text(angle = 45, hjust = 1), axis.line = element_line(size = 1, 
    colour = "black", linetype = "dashed"), panel.background = element_rect(fill = "white"), panel.grid.major = element_line(colour = "black", 
    linetype = "dotted"), panel.grid.minor = element_line(colour = "black", linetype = "dotted"), panel.background = element_rect(fill = "white")) + 
    xlab("Event Type") + ylab("Humans affected") + ggtitle("Figure 1: Top ten harmful weather event types affecting the US population health") + 
    scale_fill_manual(name = "Damage Type", values = c("orangered4", "tan2", "darkblue"), labels = c("Total", 
        "Injuries", "Fatalities"))
```

![plot of chunk unnamed-chunk-17](figure/f1.png) 


Looking at the above plot, we can deduce the following conclusions.
```
 The weather event types which are affecting poplation health most adversely are,
 
 TORNADO, EXCESSIVE HEAT, TSTM WIND, FLOOD and LIGHTNING.
 
 TORNADO            - Has the highest number of injuries and fatalities.
 EXCESSIVE HEAT     - Has the second highest number of injuries and fatalities.
 TSTM WIND & FLOOD  - Have almost equal number of injuries and fatalities.
 LIGHTNING          - Fifth highest in terms of injuries and fatalities. 
 HEAT & FLASH FLOOD - Have a high number of fatalities.
 
 These are the weather event types which should be paid attention to, with concerns
 to the population health.
 
```

<br>
Now, we will try to analyze the data to answer our second objective, which is to find out which weather event types affect the U.S. economy the most.

<br>
The following code segment shows us the top ten weather event types, which have been responsible for causing the most property damage in the U.S. 

```r
propdmg <- propertyDamages[order(propertyDamages$propertyDamage, decreasing = T), ][1:10, ]
row.names(propdmg) <- NULL
pandoc.table(propdmg, style = "grid", justify = "left", caption = "Top ten weather events causing most damage to property")
```

```
+-------------------+------------------+
| EVTYPE            | propertyDamage   |
+===================+==================+
| FLOOD             | 144657709807     |
+-------------------+------------------+
| HURRICANE/TYPHOON | 69305840000      |
+-------------------+------------------+
| TORNADO           | 56947380677      |
+-------------------+------------------+
| STORM SURGE       | 43323536000      |
+-------------------+------------------+
| FLASH FLOOD       | 16822673979      |
+-------------------+------------------+
| HAIL              | 15735267513      |
+-------------------+------------------+
| HURRICANE         | 11868319010      |
+-------------------+------------------+
| TROPICAL STORM    | 7703890550       |
+-------------------+------------------+
| WINTER STORM      | 6688497251       |
+-------------------+------------------+
| HIGH WIND         | 5270046295       |
+-------------------+------------------+
Table: Top ten weather events causing most damage to property
```

From the above table, we see that `FLOOD` is the most harmful weather event causing the maximum damage to property.

<br>
The following code segment shows us the top ten weather event types, which have been responsible for causing the most crop damage in the U.S. 

```r
cropdmg <- cropDamages[order(cropDamages$cropDamage, decreasing = T), ][1:10, ]
row.names(cropdmg) <- NULL
pandoc.table(cropdmg, style = "grid", justify = "left", caption = "Top ten weather events causing most damage to crops")
```

```
+-------------------+--------------+
| EVTYPE            | cropDamage   |
+===================+==============+
| DROUGHT           | 13972566000  |
+-------------------+--------------+
| FLOOD             | 5661968450   |
+-------------------+--------------+
| RIVER FLOOD       | 5029459000   |
+-------------------+--------------+
| ICE STORM         | 5022113500   |
+-------------------+--------------+
| HAIL              | 3025954473   |
+-------------------+--------------+
| HURRICANE         | 2741910000   |
+-------------------+--------------+
| HURRICANE/TYPHOON | 2607872800   |
+-------------------+--------------+
| FLASH FLOOD       | 1421317100   |
+-------------------+--------------+
| EXTREME COLD      | 1292973000   |
+-------------------+--------------+
| FROST/FREEZE      | 1094086000   |
+-------------------+--------------+
Table: Top ten weather events causing most damage to crops
```

From the above table, we see that `DROUGHT` is the most harmful weather event causing the maximum damage to crops.

<br>
Now we combine the above two parameters, namely `propertyDamage` and `cropDamage` to also get the total damage caused by the different weather event types and sort them based on the total cost in dollars which have been caused due to damage, by the weather events and display the top ten most harmful weather event types on the economy.

```r
economyData <- aggregate(cbind(propertyDamage, cropDamage) ~ EVTYPE, data = stormDataSubset, FUN = sum)
totalDamage <- economyData$propertyDamage + economyData$cropDamage
economyData <- cbind(economyData, totalDamage)
economyData <- economyData[order(economyData$totalDamage, decreasing = T), ]
topTenEconomy <- economyData[1:10, ]
row.names(topTenEconomy) <- NULL
pandoc.table(topTenEconomy, style = "grid", justify = "left", caption = "Top ten weather events having harmful effects on economy")
```

```
+-------------------+------------------+--------------+---------------+
| EVTYPE            | propertyDamage   | cropDamage   | totalDamage   |
+===================+==================+==============+===============+
| FLOOD             | 144657709807     | 5661968450   | 150319678257  |
+-------------------+------------------+--------------+---------------+
| HURRICANE/TYPHOON | 69305840000      | 2607872800   | 71913712800   |
+-------------------+------------------+--------------+---------------+
| TORNADO           | 56947380677      | 414953270    | 57362333947   |
+-------------------+------------------+--------------+---------------+
| STORM SURGE       | 43323536000      | 5000         | 43323541000   |
+-------------------+------------------+--------------+---------------+
| HAIL              | 15735267513      | 3025954473   | 18761221986   |
+-------------------+------------------+--------------+---------------+
| FLASH FLOOD       | 16822673979      | 1421317100   | 18243991079   |
+-------------------+------------------+--------------+---------------+
| DROUGHT           | 1046106000       | 13972566000  | 15018672000   |
+-------------------+------------------+--------------+---------------+
| HURRICANE         | 11868319010      | 2741910000   | 14610229010   |
+-------------------+------------------+--------------+---------------+
| RIVER FLOOD       | 5118945500       | 5029459000   | 10148404500   |
+-------------------+------------------+--------------+---------------+
| ICE STORM         | 3944927860       | 5022113500   | 8967041360    |
+-------------------+------------------+--------------+---------------+
Table: Top ten weather events having harmful effects on economy
```

From the above table, we see that the top three weather event types most harmful to the population health are, `FLOOD`, `HURRICANE/TYPHOON` and `TORNADO`.

The following code segment, plots a figure depicting the top ten most harmful weather events to the U.S. economy.
<br>

```r
plotHealth <- melt(topTenEconomy[, c("EVTYPE", "totalDamage", "propertyDamage", "cropDamage")], id.vars = 1)
ggplot(plotHealth, aes(x = reorder(EVTYPE, -value), y = value)) + geom_bar(stat = "identity", aes(fill = variable), 
    position = "dodge") + theme(axis.text.x = element_text(angle = 45, hjust = 1), axis.line = element_line(size = 1, 
    colour = "black", linetype = "dashed"), panel.background = element_rect(fill = "white"), panel.grid.major = element_line(colour = "black", 
    linetype = "dotted"), panel.grid.minor = element_line(colour = "black", linetype = "dotted")) + xlab("Event Type") + 
    ylab("Damage cost in $") + ggtitle("Figure 2: Top ten harmful weather event types affecting the US economy") + 
    scale_fill_manual(name = "Damage Type", values = c("firebrick1", "dodgerblue3", "chartreuse3"), labels = c("Total Damage", 
        "Property Damage", "Crop Damage"))
```

![plot of chunk unnamed-chunk-21](figure/f2.png) 


Looking at the above plot, we can deduce the following conclusions.
```
 The weather event types which are affecting poplation health most adversely are,
 
 FLOOD, HURRICANE/TYPHOON, TORNADO, STORM SURGE and HAIL.
 One should also not forget to look at DROUGHT in the figure.
 
 FLOOD               - Responsible for the most property and crop damange.
 HURRICANE/TYPHOON   - Second most harmful to the economy.
 TORNADO             - Third most harmful to the economy.
 STORM SURGE         - Comes after TORNADO in terms of damage to the economy. 
 HAIL & FLASH FLOOD  - Have almost equal harmful effects on the economy
 DROUGHT             - Responsible for causing maximum damage to crops.
 
 These are the weather event types which should be paid attention to, with concerns
 to the economy.
 
```
Finally, we will make a `panel plot` showing the top ten most harmful weather events for each of the following separately
 - INJURIES
 - FATALITIES
 - PROPERTY DAMAGE
 - CROP DAMAGE

The following code segment, creates a panel plot to accomplish the same.

```r
plotFatalities <- melt(topTenHealth[, c("EVTYPE", "FATALITIES")], id.vars = 1)
g1 <- ggplot(plotFatalities, aes(x = reorder(EVTYPE, -value), y = value)) + geom_bar(stat = "identity", 
    aes(fill = variable), position = "dodge") + theme(axis.text.x = element_text(angle = 45, hjust = 1), 
    axis.line = element_line(size = 1, colour = "black", linetype = "dashed"), panel.background = element_rect(fill = "white"), 
    panel.grid.major = element_line(colour = "black", linetype = "dotted"), panel.grid.minor = element_line(colour = "black", 
        linetype = "dotted"), panel.background = element_rect(fill = "white")) + xlab("Event Type") + 
    ylab("Humans affected") + ggtitle("Weather event types causing fatalities") + scale_fill_manual(name = "Damage Type", 
    values = c("black"), labels = c("Fatalities"))
plotInjuries <- melt(topTenHealth[, c("EVTYPE", "INJURIES")], id.vars = 1)
g2 <- ggplot(plotInjuries, aes(x = reorder(EVTYPE, -value), y = value)) + geom_bar(stat = "identity", 
    aes(fill = variable), position = "dodge") + theme(axis.text.x = element_text(angle = 45, hjust = 1), 
    axis.line = element_line(size = 1, colour = "black", linetype = "dashed"), panel.background = element_rect(fill = "white"), 
    panel.grid.major = element_line(colour = "black", linetype = "dotted"), panel.grid.minor = element_line(colour = "black", 
        linetype = "dotted"), panel.background = element_rect(fill = "white")) + xlab("Event Type") + 
    ylab("Humans affected") + ggtitle("Weather event types causing injuries") + scale_fill_manual(name = "Damage Type", 
    values = c("red"), labels = c("Injuries"))
plotPropertyDamage <- melt(topTenEconomy[, c("EVTYPE", "propertyDamage")], id.vars = 1)
g3 <- ggplot(plotPropertyDamage, aes(x = reorder(EVTYPE, -value), y = value)) + geom_bar(stat = "identity", 
    aes(fill = variable), position = "dodge") + theme(axis.text.x = element_text(angle = 45, hjust = 1), 
    axis.line = element_line(size = 1, colour = "black", linetype = "dashed"), panel.background = element_rect(fill = "white"), 
    panel.grid.major = element_line(colour = "black", linetype = "dotted"), panel.grid.minor = element_line(colour = "black", 
        linetype = "dotted"), panel.background = element_rect(fill = "white")) + xlab("Event Type") + 
    ylab("Damage cost in $") + ggtitle("Weather event types causing property damage") + scale_fill_manual(name = "Damage Type", 
    values = c("blue4"), labels = c("Property Damage"))
plotCropDamage <- melt(topTenEconomy[, c("EVTYPE", "cropDamage")], id.vars = 1)
g4 <- ggplot(plotCropDamage, aes(x = reorder(EVTYPE, -value), y = value)) + geom_bar(stat = "identity", 
    aes(fill = variable), position = "dodge") + theme(axis.text.x = element_text(angle = 45, hjust = 1), 
    axis.line = element_line(size = 1, colour = "black", linetype = "dashed"), panel.background = element_rect(fill = "white"), 
    panel.grid.major = element_line(colour = "black", linetype = "dotted"), panel.grid.minor = element_line(colour = "black", 
        linetype = "dotted"), panel.background = element_rect(fill = "white")) + xlab("Event Type") + 
    ylab("Damage cost in $") + ggtitle("Weather event types causing crop damage") + scale_fill_manual(name = "Damage Type", 
    values = c("darkgoldenrod2"), labels = c("Crop Damage"))
grid.arrange(arrangeGrob(g1, g2, g3, g4, ncol = 2, nrow = 2), main = textGrob("Figure 3: Comparative plot of the top ten most harmful weather events", 
    gp = gpar(fontsize = 20, font = 3)))
```

![plot of chunk unnamed-chunk-22](figure/f3.png) 

Looking at the above plot, we can deduce the following conclusions.
```
 FATALITIES       - Main cause of concern is TORNADO followed by EXCESSIVE HEAT and FLASH FLOOD.
 INJURIES         - Main cause of concern is TORNADO followed by TSTM WIND and FLOOD.
 PROPERTY DAMAGE  - Main cause of concern is FLOOD followed by HURRICANE/TYPHOON and TORNADO.
 CROP DAMAGE      - Main cause of concern is DROUGHT followed by FLOOD, RIVER FLOOD and ICE STORM.
 
```

<br>
## Conclusion

We analyzed the Storm Database provided by the U.S. National Oceanic and Atmospheric Administration and gained some interesting insights as to which weather event types pose a major threat to both the population health as well as the economy in the U.S. From our findings, we can conclude that major attention should be paid to `TORNADO`, `FLOOD` and `DROUGHT` followed by some other event types which have been mentioned in the above section.


[1]: https://www.coursera.org/course/repdata  "Reproducible Research"
[2]: https://www.coursera.org/jhu "Johns Hopkins University"
[3]: https://www.coursera.org/  "Coursera"
