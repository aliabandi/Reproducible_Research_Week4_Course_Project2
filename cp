<!DOCTYPE html>
<!-- saved from url=(0014)about:internet -->
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
<meta http-equiv="x-ua-compatible" content="IE=9" >

<title>Impact of severe weather events on the U.S. population health and economy</title>

<style type="text/css">
body, td {
   font-family: sans-serif;
   background-color: white;
   font-size: 12px;
   margin: 8px;
}

tt, code, pre {
   font-family: 'DejaVu Sans Mono', 'Droid Sans Mono', 'Lucida Console', Consolas, Monaco, monospace;
}

h1 { 
   font-size:2.2em; 
}

h2 { 
   font-size:1.8em; 
}

h3 { 
   font-size:1.4em; 
}

h4 { 
   font-size:1.0em; 
}

h5 { 
   font-size:0.9em; 
}

h6 { 
   font-size:0.8em; 
}

a:visited {
   color: rgb(50%, 0%, 50%);
}

pre {	
   margin-top: 0;
   max-width: 95%;
   border: 1px solid #ccc;
   white-space: pre-wrap;
}

pre code {
   display: block; padding: 0.5em;
}

code.r, code.cpp {
   background-color: #F8F8F8;
}

table, td, th {
  border: none;
}

blockquote {
   color:#666666;
   margin:0;
   padding-left: 1em;
   border-left: 0.5em #EEE solid;
}

hr {
   height: 0px;
   border-bottom: none;
   border-top-width: thin;
   border-top-style: dotted;
   border-top-color: #999999;
}

@media print {
   * { 
      background: transparent !important; 
      color: black !important; 
      filter:none !important; 
      -ms-filter: none !important; 
   }

   body { 
      font-size:12pt; 
      max-width:100%; 
   }
       
   a, a:visited { 
      text-decoration: underline; 
   }

   hr { 
      visibility: hidden;
      page-break-before: always;
   }

   pre, blockquote { 
      padding-right: 1em; 
      page-break-inside: avoid; 
   }

   tr, img { 
      page-break-inside: avoid; 
   }

   img { 
      max-width: 100% !important; 
   }

   @page :left { 
      margin: 15mm 20mm 15mm 10mm; 
   }
     
   @page :right { 
      margin: 15mm 10mm 15mm 20mm; 
   }

   p, h2, h3 { 
      orphans: 3; widows: 3; 
   }

   h2, h3 { 
      page-break-after: avoid; 
   }
}

</style>

<!-- Styles for R syntax highlighter -->
<style type="text/css">
   pre .operator,
   pre .paren {
     color: rgb(104, 118, 135)
   }

   pre .literal {
     color: rgb(88, 72, 246)
   }

   pre .number {
     color: rgb(0, 0, 205);
   }

   pre .comment {
     color: rgb(76, 136, 107);
   }

   pre .keyword {
     color: rgb(0, 0, 255);
   }

   pre .identifier {
     color: rgb(0, 0, 0);
   }

   pre .string {
     color: rgb(3, 106, 7);
   }
</style>

<!-- R syntax highlighter -->
<script type="text/javascript">
var hljs=new function(){function m(p){return p.replace(/&/gm,"&amp;").replace(/</gm,"&lt;")}function f(r,q,p){return RegExp(q,"m"+(r.cI?"i":"")+(p?"g":""))}function b(r){for(var p=0;p<r.childNodes.length;p++){var q=r.childNodes[p];if(q.nodeName=="CODE"){return q}if(!(q.nodeType==3&&q.nodeValue.match(/\s+/))){break}}}function h(t,s){var p="";for(var r=0;r<t.childNodes.length;r++){if(t.childNodes[r].nodeType==3){var q=t.childNodes[r].nodeValue;if(s){q=q.replace(/\n/g,"")}p+=q}else{if(t.childNodes[r].nodeName=="BR"){p+="\n"}else{p+=h(t.childNodes[r])}}}if(/MSIE [678]/.test(navigator.userAgent)){p=p.replace(/\r/g,"\n")}return p}function a(s){var r=s.className.split(/\s+/);r=r.concat(s.parentNode.className.split(/\s+/));for(var q=0;q<r.length;q++){var p=r[q].replace(/^language-/,"");if(e[p]){return p}}}function c(q){var p=[];(function(s,t){for(var r=0;r<s.childNodes.length;r++){if(s.childNodes[r].nodeType==3){t+=s.childNodes[r].nodeValue.length}else{if(s.childNodes[r].nodeName=="BR"){t+=1}else{if(s.childNodes[r].nodeType==1){p.push({event:"start",offset:t,node:s.childNodes[r]});t=arguments.callee(s.childNodes[r],t);p.push({event:"stop",offset:t,node:s.childNodes[r]})}}}}return t})(q,0);return p}function k(y,w,x){var q=0;var z="";var s=[];function u(){if(y.length&&w.length){if(y[0].offset!=w[0].offset){return(y[0].offset<w[0].offset)?y:w}else{return w[0].event=="start"?y:w}}else{return y.length?y:w}}function t(D){var A="<"+D.nodeName.toLowerCase();for(var B=0;B<D.attributes.length;B++){var C=D.attributes[B];A+=" "+C.nodeName.toLowerCase();if(C.value!==undefined&&C.value!==false&&C.value!==null){A+='="'+m(C.value)+'"'}}return A+">"}while(y.length||w.length){var v=u().splice(0,1)[0];z+=m(x.substr(q,v.offset-q));q=v.offset;if(v.event=="start"){z+=t(v.node);s.push(v.node)}else{if(v.event=="stop"){var p,r=s.length;do{r--;p=s[r];z+=("</"+p.nodeName.toLowerCase()+">")}while(p!=v.node);s.splice(r,1);while(r<s.length){z+=t(s[r]);r++}}}}return z+m(x.substr(q))}function j(){function q(x,y,v){if(x.compiled){return}var u;var s=[];if(x.k){x.lR=f(y,x.l||hljs.IR,true);for(var w in x.k){if(!x.k.hasOwnProperty(w)){continue}if(x.k[w] instanceof Object){u=x.k[w]}else{u=x.k;w="keyword"}for(var r in u){if(!u.hasOwnProperty(r)){continue}x.k[r]=[w,u[r]];s.push(r)}}}if(!v){if(x.bWK){x.b="\\b("+s.join("|")+")\\s"}x.bR=f(y,x.b?x.b:"\\B|\\b");if(!x.e&&!x.eW){x.e="\\B|\\b"}if(x.e){x.eR=f(y,x.e)}}if(x.i){x.iR=f(y,x.i)}if(x.r===undefined){x.r=1}if(!x.c){x.c=[]}x.compiled=true;for(var t=0;t<x.c.length;t++){if(x.c[t]=="self"){x.c[t]=x}q(x.c[t],y,false)}if(x.starts){q(x.starts,y,false)}}for(var p in e){if(!e.hasOwnProperty(p)){continue}q(e[p].dM,e[p],true)}}function d(B,C){if(!j.called){j();j.called=true}function q(r,M){for(var L=0;L<M.c.length;L++){if((M.c[L].bR.exec(r)||[null])[0]==r){return M.c[L]}}}function v(L,r){if(D[L].e&&D[L].eR.test(r)){return 1}if(D[L].eW){var M=v(L-1,r);return M?M+1:0}return 0}function w(r,L){return L.i&&L.iR.test(r)}function K(N,O){var M=[];for(var L=0;L<N.c.length;L++){M.push(N.c[L].b)}var r=D.length-1;do{if(D[r].e){M.push(D[r].e)}r--}while(D[r+1].eW);if(N.i){M.push(N.i)}return f(O,M.join("|"),true)}function p(M,L){var N=D[D.length-1];if(!N.t){N.t=K(N,E)}N.t.lastIndex=L;var r=N.t.exec(M);return r?[M.substr(L,r.index-L),r[0],false]:[M.substr(L),"",true]}function z(N,r){var L=E.cI?r[0].toLowerCase():r[0];var M=N.k[L];if(M&&M instanceof Array){return M}return false}function F(L,P){L=m(L);if(!P.k){return L}var r="";var O=0;P.lR.lastIndex=0;var M=P.lR.exec(L);while(M){r+=L.substr(O,M.index-O);var N=z(P,M);if(N){x+=N[1];r+='<span class="'+N[0]+'">'+M[0]+"</span>"}else{r+=M[0]}O=P.lR.lastIndex;M=P.lR.exec(L)}return r+L.substr(O,L.length-O)}function J(L,M){if(M.sL&&e[M.sL]){var r=d(M.sL,L);x+=r.keyword_count;return r.value}else{return F(L,M)}}function I(M,r){var L=M.cN?'<span class="'+M.cN+'">':"";if(M.rB){y+=L;M.buffer=""}else{if(M.eB){y+=m(r)+L;M.buffer=""}else{y+=L;M.buffer=r}}D.push(M);A+=M.r}function G(N,M,Q){var R=D[D.length-1];if(Q){y+=J(R.buffer+N,R);return false}var P=q(M,R);if(P){y+=J(R.buffer+N,R);I(P,M);return P.rB}var L=v(D.length-1,M);if(L){var O=R.cN?"</span>":"";if(R.rE){y+=J(R.buffer+N,R)+O}else{if(R.eE){y+=J(R.buffer+N,R)+O+m(M)}else{y+=J(R.buffer+N+M,R)+O}}while(L>1){O=D[D.length-2].cN?"</span>":"";y+=O;L--;D.length--}var r=D[D.length-1];D.length--;D[D.length-1].buffer="";if(r.starts){I(r.starts,"")}return R.rE}if(w(M,R)){throw"Illegal"}}var E=e[B];var D=[E.dM];var A=0;var x=0;var y="";try{var s,u=0;E.dM.buffer="";do{s=p(C,u);var t=G(s[0],s[1],s[2]);u+=s[0].length;if(!t){u+=s[1].length}}while(!s[2]);if(D.length>1){throw"Illegal"}return{r:A,keyword_count:x,value:y}}catch(H){if(H=="Illegal"){return{r:0,keyword_count:0,value:m(C)}}else{throw H}}}function g(t){var p={keyword_count:0,r:0,value:m(t)};var r=p;for(var q in e){if(!e.hasOwnProperty(q)){continue}var s=d(q,t);s.language=q;if(s.keyword_count+s.r>r.keyword_count+r.r){r=s}if(s.keyword_count+s.r>p.keyword_count+p.r){r=p;p=s}}if(r.language){p.second_best=r}return p}function i(r,q,p){if(q){r=r.replace(/^((<[^>]+>|\t)+)/gm,function(t,w,v,u){return w.replace(/\t/g,q)})}if(p){r=r.replace(/\n/g,"<br>")}return r}function n(t,w,r){var x=h(t,r);var v=a(t);var y,s;if(v){y=d(v,x)}else{return}var q=c(t);if(q.length){s=document.createElement("pre");s.innerHTML=y.value;y.value=k(q,c(s),x)}y.value=i(y.value,w,r);var u=t.className;if(!u.match("(\\s|^)(language-)?"+v+"(\\s|$)")){u=u?(u+" "+v):v}if(/MSIE [678]/.test(navigator.userAgent)&&t.tagName=="CODE"&&t.parentNode.tagName=="PRE"){s=t.parentNode;var p=document.createElement("div");p.innerHTML="<pre><code>"+y.value+"</code></pre>";t=p.firstChild.firstChild;p.firstChild.cN=s.cN;s.parentNode.replaceChild(p.firstChild,s)}else{t.innerHTML=y.value}t.className=u;t.result={language:v,kw:y.keyword_count,re:y.r};if(y.second_best){t.second_best={language:y.second_best.language,kw:y.second_best.keyword_count,re:y.second_best.r}}}function o(){if(o.called){return}o.called=true;var r=document.getElementsByTagName("pre");for(var p=0;p<r.length;p++){var q=b(r[p]);if(q){n(q,hljs.tabReplace)}}}function l(){if(window.addEventListener){window.addEventListener("DOMContentLoaded",o,false);window.addEventListener("load",o,false)}else{if(window.attachEvent){window.attachEvent("onload",o)}else{window.onload=o}}}var e={};this.LANGUAGES=e;this.highlight=d;this.highlightAuto=g;this.fixMarkup=i;this.highlightBlock=n;this.initHighlighting=o;this.initHighlightingOnLoad=l;this.IR="[a-zA-Z][a-zA-Z0-9_]*";this.UIR="[a-zA-Z_][a-zA-Z0-9_]*";this.NR="\\b\\d+(\\.\\d+)?";this.CNR="\\b(0[xX][a-fA-F0-9]+|(\\d+(\\.\\d*)?|\\.\\d+)([eE][-+]?\\d+)?)";this.BNR="\\b(0b[01]+)";this.RSR="!|!=|!==|%|%=|&|&&|&=|\\*|\\*=|\\+|\\+=|,|\\.|-|-=|/|/=|:|;|<|<<|<<=|<=|=|==|===|>|>=|>>|>>=|>>>|>>>=|\\?|\\[|\\{|\\(|\\^|\\^=|\\||\\|=|\\|\\||~";this.ER="(?![\\s\\S])";this.BE={b:"\\\\.",r:0};this.ASM={cN:"string",b:"'",e:"'",i:"\\n",c:[this.BE],r:0};this.QSM={cN:"string",b:'"',e:'"',i:"\\n",c:[this.BE],r:0};this.CLCM={cN:"comment",b:"//",e:"$"};this.CBLCLM={cN:"comment",b:"/\\*",e:"\\*/"};this.HCM={cN:"comment",b:"#",e:"$"};this.NM={cN:"number",b:this.NR,r:0};this.CNM={cN:"number",b:this.CNR,r:0};this.BNM={cN:"number",b:this.BNR,r:0};this.inherit=function(r,s){var p={};for(var q in r){p[q]=r[q]}if(s){for(var q in s){p[q]=s[q]}}return p}}();hljs.LANGUAGES.cpp=function(){var a={keyword:{"false":1,"int":1,"float":1,"while":1,"private":1,"char":1,"catch":1,"export":1,virtual:1,operator:2,sizeof:2,dynamic_cast:2,typedef:2,const_cast:2,"const":1,struct:1,"for":1,static_cast:2,union:1,namespace:1,unsigned:1,"long":1,"throw":1,"volatile":2,"static":1,"protected":1,bool:1,template:1,mutable:1,"if":1,"public":1,friend:2,"do":1,"return":1,"goto":1,auto:1,"void":2,"enum":1,"else":1,"break":1,"new":1,extern:1,using:1,"true":1,"class":1,asm:1,"case":1,typeid:1,"short":1,reinterpret_cast:2,"default":1,"double":1,register:1,explicit:1,signed:1,typename:1,"try":1,"this":1,"switch":1,"continue":1,wchar_t:1,inline:1,"delete":1,alignof:1,char16_t:1,char32_t:1,constexpr:1,decltype:1,noexcept:1,nullptr:1,static_assert:1,thread_local:1,restrict:1,_Bool:1,complex:1},built_in:{std:1,string:1,cin:1,cout:1,cerr:1,clog:1,stringstream:1,istringstream:1,ostringstream:1,auto_ptr:1,deque:1,list:1,queue:1,stack:1,vector:1,map:1,set:1,bitset:1,multiset:1,multimap:1,unordered_set:1,unordered_map:1,unordered_multiset:1,unordered_multimap:1,array:1,shared_ptr:1}};return{dM:{k:a,i:"</",c:[hljs.CLCM,hljs.CBLCLM,hljs.QSM,{cN:"string",b:"'\\\\?.",e:"'",i:"."},{cN:"number",b:"\\b(\\d+(\\.\\d*)?|\\.\\d+)(u|U|l|L|ul|UL|f|F)"},hljs.CNM,{cN:"preprocessor",b:"#",e:"$"},{cN:"stl_container",b:"\\b(deque|list|queue|stack|vector|map|set|bitset|multiset|multimap|unordered_map|unordered_set|unordered_multiset|unordered_multimap|array)\\s*<",e:">",k:a,r:10,c:["self"]}]}}}();hljs.LANGUAGES.r={dM:{c:[hljs.HCM,{cN:"number",b:"\\b0[xX][0-9a-fA-F]+[Li]?\\b",e:hljs.IMMEDIATE_RE,r:0},{cN:"number",b:"\\b\\d+(?:[eE][+\\-]?\\d*)?L\\b",e:hljs.IMMEDIATE_RE,r:0},{cN:"number",b:"\\b\\d+\\.(?!\\d)(?:i\\b)?",e:hljs.IMMEDIATE_RE,r:1},{cN:"number",b:"\\b\\d+(?:\\.\\d*)?(?:[eE][+\\-]?\\d*)?i?\\b",e:hljs.IMMEDIATE_RE,r:0},{cN:"number",b:"\\.\\d+(?:[eE][+\\-]?\\d*)?i?\\b",e:hljs.IMMEDIATE_RE,r:1},{cN:"keyword",b:"(?:tryCatch|library|setGeneric|setGroupGeneric)\\b",e:hljs.IMMEDIATE_RE,r:10},{cN:"keyword",b:"\\.\\.\\.",e:hljs.IMMEDIATE_RE,r:10},{cN:"keyword",b:"\\.\\.\\d+(?![\\w.])",e:hljs.IMMEDIATE_RE,r:10},{cN:"keyword",b:"\\b(?:function)",e:hljs.IMMEDIATE_RE,r:2},{cN:"keyword",b:"(?:if|in|break|next|repeat|else|for|return|switch|while|try|stop|warning|require|attach|detach|source|setMethod|setClass)\\b",e:hljs.IMMEDIATE_RE,r:1},{cN:"literal",b:"(?:NA|NA_integer_|NA_real_|NA_character_|NA_complex_)\\b",e:hljs.IMMEDIATE_RE,r:10},{cN:"literal",b:"(?:NULL|TRUE|FALSE|T|F|Inf|NaN)\\b",e:hljs.IMMEDIATE_RE,r:1},{cN:"identifier",b:"[a-zA-Z.][a-zA-Z0-9._]*\\b",e:hljs.IMMEDIATE_RE,r:0},{cN:"operator",b:"<\\-(?!\\s*\\d)",e:hljs.IMMEDIATE_RE,r:2},{cN:"operator",b:"\\->|<\\-",e:hljs.IMMEDIATE_RE,r:1},{cN:"operator",b:"%%|~",e:hljs.IMMEDIATE_RE},{cN:"operator",b:">=|<=|==|!=|\\|\\||&&|=|\\+|\\-|\\*|/|\\^|>|<|!|&|\\||\\$|:",e:hljs.IMMEDIATE_RE,r:0},{cN:"operator",b:"%",e:"%",i:"\\n",r:1},{cN:"identifier",b:"`",e:"`",r:0},{cN:"string",b:'"',e:'"',c:[hljs.BE],r:0},{cN:"string",b:"'",e:"'",c:[hljs.BE],r:0},{cN:"paren",b:"[[({\\])}]",e:hljs.IMMEDIATE_RE,r:0}]}};
hljs.initHighlightingOnLoad();
</script>




</head>

<body>
<h1>Impact of severe weather events on the U.S. population health and economy</h1>

<p><br></p>

<h2>Synopsis</h2>

<p>This detailed analysis has been performed to fulfill the requirements of the second peer assessment for the course <a href="https://www.coursera.org/course/repdata" title="Reproducible Research">Reproducible Research</a> offered by the <a href="https://www.coursera.org/jhu" title="Johns Hopkins University">Johns Hopkins University</a> on <a href="https://www.coursera.org/" title="Coursera">Coursera</a>. In this project, we will explore and analyse the U.S. National Oceanic and Atmospheric Administration&#39;s (NOAA) storm database. This database tracks characteristics of major storms and weather events in the United States, including when and where they occur, as well as estimates of any fatalities, injuries, and property damage.</p>

<p>The main objectives of this research are as follows</p>

<ul>
<li>To find out which type of weather events, indicated by the <code>EVTYPE</code> variable, are the most harmful with respect to the population health in the U.S.</li>
<li>To find out which type of weather events have the greatest economic consequences in the U.S.</li>
</ul>

<p>The key takeway from our analysis was</p>

<ul>
<li><code>TORNADO</code> is the most devastating weather event affecting the poplation health.</li>
<li><code>FLOOD</code> has been responsible for causing the maximum property damage.</li>
<li><code>DROUGHT</code> has been responsible for causing the maximum crop damage.</li>
</ul>

<p><br></p>

<h2>Data Processing</h2>

<p>This section consists of the steps followed to setup our R environment, get the required data, clean and process it.</p>

<h4><u>Setting up required environment in R</u></h4>

<p>In the following code segment, we set the required global options and load the required packages in R.</p>

<pre><code class="r">
opts_chunk$set(cache = TRUE, echo = TRUE)
options(scipen = 999, width = 100)

library(ggplot2)
library(reshape2)
library(gridExtra)
</code></pre>

<pre><code>## Loading required package: grid
</code></pre>

<pre><code class="r">library(pander)
</code></pre>

<pre><code>## 
## Attaching package: &#39;pander&#39;
## 
## The following object is masked from &#39;package:knitr&#39;:
## 
##     pandoc
</code></pre>

<p><br></p>

<h4><u>Setting the working directory</u></h4>

<p>Here we set the working directory as required, it can be changed according to your preference in your personal computer.</p>

<pre><code class="r">
setwd(&quot;E:/MOOCs/Coursera/Data Science - Specialization/Reproducible Research/Peer Assessment 2&quot;)

</code></pre>

<p><br></p>

<h4><u>Getting the required data</u></h4>

<p>We get the required data set by downloading it, in case it is not present in the working directory by using the following code segment.</p>

<pre><code class="r">
if (!file.exists(&quot;repdata-data-StormData.csv.bz2&quot;)) {
    download.file(&quot;https://d396qusza40orc.cloudfront.net/repdata%2Fdata%2FStormData.csv.bz2&quot;, destfile = &quot;repdata-data-StormData.csv.bz2&quot;, 
        method = &quot;curl&quot;)
}
</code></pre>

<p><br></p>

<h4><u>Loading the data</u></h4>

<p>Next, we read the file using appropriate functions and load in the data into the <code>stormData</code> data frame using the following code segment. We then look closely at the data set. It contains <code>902297</code> observations, where each observation is a row and <code>37</code> variables denoted by the columns. </p>

<pre><code class="r">
stormData &lt;- read.csv(bzfile(&quot;repdata-data-StormData.csv.bz2&quot;), sep = &quot;,&quot;, header = TRUE, stringsAsFactors = FALSE)
str(stormData)
</code></pre>

<pre><code>&#39;data.frame&#39;:   902297 obs. of  37 variables:
 $ STATE__   : num  1 1 1 1 1 1 1 1 1 1 ...
 $ BGN_DATE  : chr  &quot;4/18/1950 0:00:00&quot; &quot;4/18/1950 0:00:00&quot; &quot;2/20/1951 0:00:00&quot; &quot;6/8/1951 0:00:00&quot; ...
 $ BGN_TIME  : chr  &quot;0130&quot; &quot;0145&quot; &quot;1600&quot; &quot;0900&quot; ...
 $ TIME_ZONE : chr  &quot;CST&quot; &quot;CST&quot; &quot;CST&quot; &quot;CST&quot; ...
 $ COUNTY    : num  97 3 57 89 43 77 9 123 125 57 ...
 $ COUNTYNAME: chr  &quot;MOBILE&quot; &quot;BALDWIN&quot; &quot;FAYETTE&quot; &quot;MADISON&quot; ...
 $ STATE     : chr  &quot;AL&quot; &quot;AL&quot; &quot;AL&quot; &quot;AL&quot; ...
 $ EVTYPE    : chr  &quot;TORNADO&quot; &quot;TORNADO&quot; &quot;TORNADO&quot; &quot;TORNADO&quot; ...
 $ BGN_RANGE : num  0 0 0 0 0 0 0 0 0 0 ...
 $ BGN_AZI   : chr  &quot;&quot; &quot;&quot; &quot;&quot; &quot;&quot; ...
 $ BGN_LOCATI: chr  &quot;&quot; &quot;&quot; &quot;&quot; &quot;&quot; ...
 $ END_DATE  : chr  &quot;&quot; &quot;&quot; &quot;&quot; &quot;&quot; ...
 $ END_TIME  : chr  &quot;&quot; &quot;&quot; &quot;&quot; &quot;&quot; ...
 $ COUNTY_END: num  0 0 0 0 0 0 0 0 0 0 ...
 $ COUNTYENDN: logi  NA NA NA NA NA NA ...
 $ END_RANGE : num  0 0 0 0 0 0 0 0 0 0 ...
 $ END_AZI   : chr  &quot;&quot; &quot;&quot; &quot;&quot; &quot;&quot; ...
 $ END_LOCATI: chr  &quot;&quot; &quot;&quot; &quot;&quot; &quot;&quot; ...
 $ LENGTH    : num  14 2 0.1 0 0 1.5 1.5 0 3.3 2.3 ...
 $ WIDTH     : num  100 150 123 100 150 177 33 33 100 100 ...
 $ F         : int  3 2 2 2 2 2 2 1 3 3 ...
 $ MAG       : num  0 0 0 0 0 0 0 0 0 0 ...
 $ FATALITIES: num  0 0 0 0 0 0 0 0 1 0 ...
 $ INJURIES  : num  15 0 2 2 2 6 1 0 14 0 ...
 $ PROPDMG   : num  25 2.5 25 2.5 2.5 2.5 2.5 2.5 25 25 ...
 $ PROPDMGEXP: chr  &quot;K&quot; &quot;K&quot; &quot;K&quot; &quot;K&quot; ...
 $ CROPDMG   : num  0 0 0 0 0 0 0 0 0 0 ...
 $ CROPDMGEXP: chr  &quot;&quot; &quot;&quot; &quot;&quot; &quot;&quot; ...
 $ WFO       : chr  &quot;&quot; &quot;&quot; &quot;&quot; &quot;&quot; ...
 $ STATEOFFIC: chr  &quot;&quot; &quot;&quot; &quot;&quot; &quot;&quot; ...
 $ ZONENAMES : chr  &quot;&quot; &quot;&quot; &quot;&quot; &quot;&quot; ...
 $ LATITUDE  : num  3040 3042 3340 3458 3412 ...
 $ LONGITUDE : num  8812 8755 8742 8626 8642 ...
 $ LATITUDE_E: num  3051 0 0 0 0 ...
 $ LONGITUDE_: num  8806 0 0 0 0 ...
 $ REMARKS   : chr  &quot;&quot; &quot;&quot; &quot;&quot; &quot;&quot; ...
 $ REFNUM    : num  1 2 3 4 5 6 7 8 9 10 ...
</code></pre>

<p><br></p>

<h4><u>Subsetting the data</u></h4>

<p>Looking closely at the above data set details, we pick several variables which are of our interest, namely</p>

<pre><code>
 INJURIES   :   This indicates Event-related injuries
 FATALITIES :   This indicates Event-related fatalities
 PROPDMG    :   This indicates the property damage amount
 CROPDMG    :   Crop damage amount
 PROPDMGEXP :   Property damage units
 CROPDMGEXP :   Crop damage units

</code></pre>

<p>The above variables will be mainly used for the analysis based on the questions defined in our objective earlier. Next, we subset our <code>stormData</code> data frame to get a data frame <code>stormDataSubset</code> with the necessary variables, such that none of its rows i.e, observations have zero injuries or fatalities or damages. The code segment below shows the operations which were performed and the data set we obtain consists of <code>254633</code> rows of observations and <code>7</code> variables as the columns.</p>

<pre><code class="r">
stormDataSubset &lt;- subset(x = stormData, subset = INJURIES &gt; 0 | FATALITIES &gt; 0 | PROPDMG &gt; 0 | CROPDMG &gt; 
    0, select = c(&quot;EVTYPE&quot;, &quot;FATALITIES&quot;, &quot;INJURIES&quot;, &quot;PROPDMG&quot;, &quot;PROPDMGEXP&quot;, &quot;CROPDMG&quot;, &quot;CROPDMGEXP&quot;))
str(stormDataSubset)
</code></pre>

<pre><code>&#39;data.frame&#39;:   254633 obs. of  7 variables:
 $ EVTYPE    : chr  &quot;TORNADO&quot; &quot;TORNADO&quot; &quot;TORNADO&quot; &quot;TORNADO&quot; ...
 $ FATALITIES: num  0 0 0 0 0 0 0 0 1 0 ...
 $ INJURIES  : num  15 0 2 2 2 6 1 0 14 0 ...
 $ PROPDMG   : num  25 2.5 25 2.5 2.5 2.5 2.5 2.5 25 25 ...
 $ PROPDMGEXP: chr  &quot;K&quot; &quot;K&quot; &quot;K&quot; &quot;K&quot; ...
 $ CROPDMG   : num  0 0 0 0 0 0 0 0 0 0 ...
 $ CROPDMGEXP: chr  &quot;&quot; &quot;&quot; &quot;&quot; &quot;&quot; ...
</code></pre>

<p><br></p>

<h4><u>Transforming the data</u></h4>

<p>Now, we will start operating on the data and transforming it into required formats to answer the questions in our main objective. </p>

<p><br></p>

<h4>First Objective</h4>

<p>In the following segment, we will perform necessary steps to answer the objective of finding out, which types of weather events are most harmful to the human health.</p>

<p>Looking closely at the variables, we notice that to answer this question, there are two variables of interest namely, <code>FATALITIES</code> and <code>INJURIES</code> which we will be looking into more closely.</p>

<p>Now, we aggregate the total injuries for each weather event type across the U.S. in the following code segment and subset the events, only for which the number of injuries is atleast <code>1</code></p>

<pre><code class="r">
totalInjuries &lt;- aggregate(INJURIES ~ EVTYPE, data = stormDataSubset, FUN = sum)
totalInjuries &lt;- totalInjuries[totalInjuries$INJURIES &gt; 0, ]
str(totalInjuries)
</code></pre>

<pre><code>&#39;data.frame&#39;:   158 obs. of  2 variables:
 $ EVTYPE  : chr  &quot;AVALANCHE&quot; &quot;BLACK ICE&quot; &quot;BLIZZARD&quot; &quot;blowing snow&quot; ...
 $ INJURIES: num  170 24 805 1 13 2 2 5 1 1 ...
</code></pre>

<p>Next, we aggregate the total fatalities for each weather event type across the U.S. in the following code segment and subset the events, only for which the number of fatalities is atleast <code>1</code></p>

<pre><code class="r">
totalFatalities &lt;- aggregate(FATALITIES ~ EVTYPE, data = stormDataSubset, FUN = sum)
totalFatalities &lt;- totalFatalities[totalFatalities$FATALITIES &gt; 0, ]
str(totalFatalities)
</code></pre>

<pre><code>&#39;data.frame&#39;:   168 obs. of  2 variables:
 $ EVTYPE    : chr  &quot;AVALANCE&quot; &quot;AVALANCHE&quot; &quot;BLACK ICE&quot; &quot;BLIZZARD&quot; ...
 $ FATALITIES: num  1 224 1 101 1 1 3 2 1 3 ...
</code></pre>

<p><br></p>

<h4>Second Objective</h4>

<p>In the next segment, we will perform necessary steps to answer the objective of finding out, which types of weather events have the greatest economic consequences.</p>

<p>Looking closely at the variables, we notice that to answer this question, there are two variables of interest namely, <code>PROPDMG</code> and <code>CROPDMG</code> which we will be looking into more closely.</p>

<p>Now, the variables, <code>PROPDMGEXP</code> and <code>CROPDMGEXP</code> have different values which we can observe from the following code segments.
For <code>PROPDMGEXP</code> we see the following exponent values, here we have decided to use the following strategy, from the variable descriptions in the codebook and some assumptions</p>

<pre><code>
 &#39;-&#39; or &#39;+&#39; or &quot;&quot;  -  Leave PROPDMG as it is
 &#39;0&#39; - &#39;7&#39;         -  Multiply PROPDMG by 1eN i.e, 10^N where N belongs to {0,2,3,4,5,6,7}
 &#39;B&#39;               -  Multiply PROPDMG by 1e9 i.e, 10^9
 &#39;h&#39; or &#39;H&#39;        -  Multiply PROPDMG by 1e2 i.e, 100
 &#39;K&#39;               -  Multiply PROPDMG by 1e3 i.e, 1000
 &#39;m&#39; or &#39;M&#39;        -  Multiply PROPDMG by 1e6 i.e, 10^6

</code></pre>

<p>We take the multipliers based on the distinct exponent labels shown in the code segment below.</p>

<pre><code class="r">
t &lt;- table(stormDataSubset$PROPDMGEXP)
names(t) &lt;- c(&quot;\&quot;\&quot;&quot;, &quot;-&quot;, &quot;+&quot;, &quot;0&quot;, &quot;2&quot;, &quot;3&quot;, &quot;4&quot;, &quot;5&quot;, &quot;6&quot;, &quot;7&quot;, &quot;B&quot;, &quot;h&quot;, &quot;H&quot;, &quot;K&quot;, &quot;m&quot;, &quot;M&quot;)
pandoc.table(t, style = &quot;grid&quot;, justify = &quot;left&quot;, caption = &quot;PROPDMGEXP label frequencies&quot;)
</code></pre>

<pre><code>

+-------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
| &quot;&quot;    | -   | +   | 0   | 2   | 3   | 4   | 5   | 6   | 7   | B   |
+=======+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+
| 11585 | 1   | 5   | 210 | 1   | 1   | 4   | 18  | 3   | 3   | 40  |
+-------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+

Table: PROPDMGEXP label frequencies (continued below)



+-----+-----+--------+-----+-------+
| h   | H   | K      | m   | M     |
+=====+=====+========+=====+=======+
| 1   | 6   | 231428 | 7   | 11320 |
+-----+-----+--------+-----+-------+
</code></pre>

<p><br>
For <code>CROPDMGEXP</code> we see the following exponent values, here we have decided to use the following strategy, from the variable descriptions in the codebook and some assumptions</p>

<pre><code>
 &#39;?&#39; or &quot;&quot;  -  Leave CROPDMG as it is
 &#39;0&#39;        -  Multiply CROPDMG by 1eN i.e, 10^N where N belongs to {0}
 &#39;B&#39;        -  Multiply CROPDMG by 1e9 i.e, 10^9
 &#39;k&#39; or &#39;K&#39; -  Multiply CROPDMG by 1e3 i.e, 1000
 &#39;m&#39; or &#39;M&#39; -  Multiply CROPDMG by 1e6 i.e, 10^6

</code></pre>

<p>We take the multipliers based on the distinct exponent labels shown in the code segment below.</p>

<pre><code class="r">
t &lt;- table(stormDataSubset$CROPDMGEXP)
names(t) &lt;- c(&quot;\&quot;\&quot;&quot;, &quot;?&quot;, &quot;0&quot;, &quot;B&quot;, &quot;k&quot;, &quot;K&quot;, &quot;m&quot;, &quot;M&quot;)
pandoc.table(t, style = &quot;grid&quot;, justify = &quot;left&quot;, caption = &quot;CROPDMGEXP label frequencies&quot;)
</code></pre>

<pre><code>

+--------+-----+-----+-----+-----+-------+-----+------+
| &quot;&quot;     | ?   | 0   | B   | k   | K     | m   | M    |
+========+=====+=====+=====+=====+=======+=====+======+
| 152664 | 6   | 17  | 7   | 21  | 99932 | 1   | 1985 |
+--------+-----+-----+-----+-----+-------+-----+------+

Table: CROPDMGEXP label frequencies
</code></pre>

<pre><code class="r">
</code></pre>

<p><br>
Now we transform the values of <code>PROPDMGEXP</code> based on the key to proper numeric multipliers in the following code segment. </p>

<pre><code class="r">
multiplierKey &lt;- c(`-` = 1, `+` = 1, `0` = 1, `2` = 100, `3` = 1000, `4` = 10000, `5` = 100000, `6` = 1000000, 
    `7` = 10000000, B = 1000000000, h = 100, H = 100, K = 1000, m = 1000000, M = 1000000)

propdmgMultiplier &lt;- multiplierKey[as.character(stormDataSubset$PROPDMGEXP)]

propdmgMultiplier[is.na(propdmgMultiplier)] &lt;- 1

pandoc.table(table(propdmgMultiplier), style = &quot;grid&quot;, justify = &quot;left&quot;, caption = &quot;Property damage multiplier value frequencies&quot;)
</code></pre>

<pre><code>

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
</code></pre>

<p>After getting the multiplier values above, we multiply it with the respective <code>PROPDMG</code> values to obtain the actual value of property damage caused by the different weather event types.</p>

<pre><code class="r">
stormDataSubset$propertyDamage &lt;- stormDataSubset$PROPDMG * propdmgMultiplier

propertyDamages &lt;- aggregate(propertyDamage ~ EVTYPE, data = stormDataSubset, FUN = sum)

propertyDamages &lt;- propertyDamages[propertyDamages$propertyDamage &gt; 0, ]

str(propertyDamages)
</code></pre>

<pre><code>&#39;data.frame&#39;:   406 obs. of  2 variables:
 $ EVTYPE        : chr  &quot;   HIGH SURF ADVISORY&quot; &quot; FLASH FLOOD&quot; &quot; TSTM WIND&quot; &quot; TSTM WIND (G45)&quot; ...
 $ propertyDamage: num  200000 50000 8100000 8000 5000 ...
</code></pre>

<p><br>
Now we transform the values of <code>CROPDMGEXP</code> based on the key to proper numeric multipliers in the following code segment. </p>

<pre><code class="r">multiplierKey &lt;- c(`?` = 1, `0` = 1, B = 1000000000, k = 1000, K = 1000, m = 1000000, M = 1000000)

cropdmgMultiplier &lt;- multiplierKey[as.character(stormDataSubset$CROPDMGEXP)]

cropdmgMultiplier[is.na(cropdmgMultiplier)] &lt;- 1

pandoc.table(table(cropdmgMultiplier), style = &quot;grid&quot;, justify = &quot;left&quot;, caption = &quot;Crop damage multiplier value frequencies&quot;)
</code></pre>

<pre><code>

+--------+--------+-----------+--------------+
| 1      | 1000   | 1000000   | 1000000000   |
+========+========+===========+==============+
| 152687 | 99953  | 1986      | 7            |
+--------+--------+-----------+--------------+

Table: Crop damage multiplier value frequencies
</code></pre>

<p>After getting the multiplier values above, we multiply it with the respective <code>CROPDMG</code> values to obtain the actual value of property damage caused by the different weather event types.</p>

<pre><code class="r">
stormDataSubset$cropDamage &lt;- stormDataSubset$CROPDMG * cropdmgMultiplier

cropDamages &lt;- aggregate(cropDamage ~ EVTYPE, data = stormDataSubset, FUN = sum)

cropDamages &lt;- cropDamages[cropDamages$cropDamage &gt; 0, ]

str(cropDamages)
</code></pre>

<pre><code>&#39;data.frame&#39;:   136 obs. of  2 variables:
 $ EVTYPE    : chr  &quot;AGRICULTURAL FREEZE&quot; &quot;BLIZZARD&quot; &quot;COASTAL FLOODING&quot; &quot;COLD AIR TORNADO&quot; ...
 $ cropDamage: num  28820000 112060000 56000 50 66000000 ...
</code></pre>

<p><br></p>

<h2>Analysis and Results</h2>

<p>In this section, we will be analyzing the data we transformed and prepared in the previous section to answer the questions pertaining to our two main objectives. First, we will try to analyze the data to answer our first objective, which is to find out which weather event types affect population health the most. </p>

<p>The following code segment shows us the top ten weather event types, which have been responsible for causing the most population injuries in the U.S. </p>

<pre><code class="r">
injuries &lt;- totalInjuries[order(totalInjuries$INJURIES, decreasing = T), ][1:10, ]
row.names(injuries) &lt;- NULL
pandoc.table(injuries, style = &quot;grid&quot;, justify = &quot;left&quot;, caption = &quot;Top ten weather events causing most injuries&quot;)
</code></pre>

<pre><code>

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
</code></pre>

<p>From the above table, we see that <code>TORNADO</code> is the most harmful weather event causing maximum number of injuries.</p>

<p><br>
The following code segment shows us the top ten weather event types, which have been responsible for causing the most population fatalities in the U.S. </p>

<pre><code class="r">
fatalities &lt;- totalFatalities[order(totalFatalities$FATALITIES, decreasing = T), ][1:10, ]
row.names(fatalities) &lt;- NULL
pandoc.table(fatalities, style = &quot;grid&quot;, justify = &quot;left&quot;, caption = &quot;Top ten weather events causing most fatalities&quot;)
</code></pre>

<pre><code>

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
</code></pre>

<p>From the above table, we see that <code>TORNADO</code> is the most harmful weather event causing maximum number of injuries.</p>

<p><br>
Now we combine the above two parameters, namely <code>INJURIES</code> and <code>FATALITIES</code> to also get the total damage caused by the different weather event types and sort them based on the total casualties which have been caused by the weather events and display the top ten most harmful weather event types on population health.</p>

<pre><code class="r">
healthData &lt;- aggregate(cbind(FATALITIES, INJURIES) ~ EVTYPE, data = stormDataSubset, FUN = sum)
TOTAL &lt;- healthData$FATALITIES + healthData$INJURIES
healthData &lt;- cbind(healthData, TOTAL)
healthData &lt;- healthData[order(healthData$TOTAL, decreasing = T), ]
topTenHealth &lt;- healthData[1:10, ]
row.names(topTenHealth) &lt;- NULL
pandoc.table(topTenHealth, style = &quot;grid&quot;, justify = &quot;left&quot;, caption = &quot;Top ten weather events having harmful effects on population health&quot;)
</code></pre>

<pre><code>

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
</code></pre>

<p>From the above table, we see that the top three weather event types most harmful to the population health are, <code>TORNADO</code>, <code>EXCESSIVE HEAT</code> and <code>TSTM WIND</code>.</p>

<p>The following code segment, plots a figure depicting the top ten most harmful weather events to the U.S. population health.
<br></p>

<pre><code class="r">


plotHealth &lt;- melt(topTenHealth[, c(&quot;EVTYPE&quot;, &quot;TOTAL&quot;, &quot;INJURIES&quot;, &quot;FATALITIES&quot;)], id.vars = 1)

ggplot(plotHealth, aes(x = reorder(EVTYPE, -value), y = value)) + geom_bar(stat = &quot;identity&quot;, aes(fill = variable), 
    position = &quot;dodge&quot;) + theme(axis.text.x = element_text(angle = 45, hjust = 1), axis.line = element_line(size = 1, 
    colour = &quot;black&quot;, linetype = &quot;dashed&quot;), panel.background = element_rect(fill = &quot;white&quot;), panel.grid.major = element_line(colour = &quot;black&quot;, 
    linetype = &quot;dotted&quot;), panel.grid.minor = element_line(colour = &quot;black&quot;, linetype = &quot;dotted&quot;), panel.background = element_rect(fill = &quot;white&quot;)) + 
    xlab(&quot;Event Type&quot;) + ylab(&quot;Humans affected&quot;) + ggtitle(&quot;Figure 1: Top ten harmful weather event types affecting the US population health&quot;) + 
    scale_fill_manual(name = &quot;Damage Type&quot;, values = c(&quot;orangered4&quot;, &quot;tan2&quot;, &quot;darkblue&quot;), labels = c(&quot;Total&quot;, 
        &quot;Injuries&quot;, &quot;Fatalities&quot;))
</code></pre>

<p><img src="data:image/png;base64,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" alt="plot of chunk unnamed-chunk-17"/> </p>

<p>Looking at the above plot, we can deduce the following conclusions.</p>

<pre><code>
 The weather event types which are affecting poplation health most adversely are,

 TORNADO, EXCESSIVE HEAT, TSTM WIND, FLOOD and LIGHTNING.

 TORNADO            - Has the highest number of injuries and fatalities.
 EXCESSIVE HEAT     - Has the second highest number of injuries and fatalities.
 TSTM WIND &amp; FLOOD  - Have almost equal number of injuries and fatalities.
 LIGHTNING          - Fifth highest in terms of injuries and fatalities. 
 HEAT &amp; FLASH FLOOD - Have a high number of fatalities.

 These are the weather event types which should be paid attention to, with concerns
 to the population health.

</code></pre>

<p><br>
Now, we will try to analyze the data to answer our second objective, which is to find out which weather event types affect the U.S. economy the most.</p>

<p><br>
The following code segment shows us the top ten weather event types, which have been responsible for causing the most property damage in the U.S. </p>

<pre><code class="r">
propdmg &lt;- propertyDamages[order(propertyDamages$propertyDamage, decreasing = T), ][1:10, ]
row.names(propdmg) &lt;- NULL
pandoc.table(propdmg, style = &quot;grid&quot;, justify = &quot;left&quot;, caption = &quot;Top ten weather events causing most damage to property&quot;)
</code></pre>

<pre><code>

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
</code></pre>

<p>From the above table, we see that <code>FLOOD</code> is the most harmful weather event causing the maximum damage to property.</p>

<p><br>
The following code segment shows us the top ten weather event types, which have been responsible for causing the most crop damage in the U.S. </p>

<pre><code class="r">
cropdmg &lt;- cropDamages[order(cropDamages$cropDamage, decreasing = T), ][1:10, ]
row.names(cropdmg) &lt;- NULL
pandoc.table(cropdmg, style = &quot;grid&quot;, justify = &quot;left&quot;, caption = &quot;Top ten weather events causing most damage to crops&quot;)
</code></pre>

<pre><code>

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
</code></pre>

<p>From the above table, we see that <code>DROUGHT</code> is the most harmful weather event causing the maximum damage to crops.</p>

<p><br>
Now we combine the above two parameters, namely <code>propertyDamage</code> and <code>cropDamage</code> to also get the total damage caused by the different weather event types and sort them based on the total cost in dollars which have been caused due to damage, by the weather events and display the top ten most harmful weather event types on the economy.</p>

<pre><code class="r">
economyData &lt;- aggregate(cbind(propertyDamage, cropDamage) ~ EVTYPE, data = stormDataSubset, FUN = sum)
totalDamage &lt;- economyData$propertyDamage + economyData$cropDamage
economyData &lt;- cbind(economyData, totalDamage)
economyData &lt;- economyData[order(economyData$totalDamage, decreasing = T), ]
topTenEconomy &lt;- economyData[1:10, ]
row.names(topTenEconomy) &lt;- NULL
pandoc.table(topTenEconomy, style = &quot;grid&quot;, justify = &quot;left&quot;, caption = &quot;Top ten weather events having harmful effects on economy&quot;)
</code></pre>

<pre><code>

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
</code></pre>

<p>From the above table, we see that the top three weather event types most harmful to the population health are, <code>FLOOD</code>, <code>HURRICANE/TYPHOON</code> and <code>TORNADO</code>.</p>

<p>The following code segment, plots a figure depicting the top ten most harmful weather events to the U.S. economy.
<br></p>

<pre><code class="r">
plotHealth &lt;- melt(topTenEconomy[, c(&quot;EVTYPE&quot;, &quot;totalDamage&quot;, &quot;propertyDamage&quot;, &quot;cropDamage&quot;)], id.vars = 1)

ggplot(plotHealth, aes(x = reorder(EVTYPE, -value), y = value)) + geom_bar(stat = &quot;identity&quot;, aes(fill = variable), 
    position = &quot;dodge&quot;) + theme(axis.text.x = element_text(angle = 45, hjust = 1), axis.line = element_line(size = 1, 
    colour = &quot;black&quot;, linetype = &quot;dashed&quot;), panel.background = element_rect(fill = &quot;white&quot;), panel.grid.major = element_line(colour = &quot;black&quot;, 
    linetype = &quot;dotted&quot;), panel.grid.minor = element_line(colour = &quot;black&quot;, linetype = &quot;dotted&quot;)) + xlab(&quot;Event Type&quot;) + 
    ylab(&quot;Damage cost in $&quot;) + ggtitle(&quot;Figure 2: Top ten harmful weather event types affecting the US economy&quot;) + 
    scale_fill_manual(name = &quot;Damage Type&quot;, values = c(&quot;firebrick1&quot;, &quot;dodgerblue3&quot;, &quot;chartreuse3&quot;), labels = c(&quot;Total Damage&quot;, 
        &quot;Property Damage&quot;, &quot;Crop Damage&quot;))
</code></pre>

<p><img src="data:image/png;base64,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" alt="plot of chunk unnamed-chunk-21"/> </p>

<p>Looking at the above plot, we can deduce the following conclusions.</p>

<pre><code>
 The weather event types which are affecting poplation health most adversely are,

 FLOOD, HURRICANE/TYPHOON, TORNADO, STORM SURGE and HAIL.
 One should also not forget to look at DROUGHT in the figure.

 FLOOD               - Responsible for the most property and crop damange.
 HURRICANE/TYPHOON   - Second most harmful to the economy.
 TORNADO             - Third most harmful to the economy.
 STORM SURGE         - Comes after TORNADO in terms of damage to the economy. 
 HAIL &amp; FLASH FLOOD  - Have almost equal harmful effects on the economy
 DROUGHT             - Responsible for causing maximum damage to crops.

 These are the weather event types which should be paid attention to, with concerns
 to the economy.

</code></pre>

<p>Finally, we will make a <code>panel plot</code> showing the top ten most harmful weather events for each of the following separately</p>

<ul>
<li>INJURIES</li>
<li>FATALITIES</li>
<li>PROPERTY DAMAGE</li>
<li>CROP DAMAGE</li>
</ul>

<p>The following code segment, creates a panel plot to accomplish the same.</p>

<pre><code class="r">
plotFatalities &lt;- melt(topTenHealth[, c(&quot;EVTYPE&quot;, &quot;FATALITIES&quot;)], id.vars = 1)
g1 &lt;- ggplot(plotFatalities, aes(x = reorder(EVTYPE, -value), y = value)) + geom_bar(stat = &quot;identity&quot;, 
    aes(fill = variable), position = &quot;dodge&quot;) + theme(axis.text.x = element_text(angle = 45, hjust = 1), 
    axis.line = element_line(size = 1, colour = &quot;black&quot;, linetype = &quot;dashed&quot;), panel.background = element_rect(fill = &quot;white&quot;), 
    panel.grid.major = element_line(colour = &quot;black&quot;, linetype = &quot;dotted&quot;), panel.grid.minor = element_line(colour = &quot;black&quot;, 
        linetype = &quot;dotted&quot;), panel.background = element_rect(fill = &quot;white&quot;)) + xlab(&quot;Event Type&quot;) + 
    ylab(&quot;Humans affected&quot;) + ggtitle(&quot;Weather event types causing fatalities&quot;) + scale_fill_manual(name = &quot;Damage Type&quot;, 
    values = c(&quot;black&quot;), labels = c(&quot;Fatalities&quot;))


plotInjuries &lt;- melt(topTenHealth[, c(&quot;EVTYPE&quot;, &quot;INJURIES&quot;)], id.vars = 1)
g2 &lt;- ggplot(plotInjuries, aes(x = reorder(EVTYPE, -value), y = value)) + geom_bar(stat = &quot;identity&quot;, 
    aes(fill = variable), position = &quot;dodge&quot;) + theme(axis.text.x = element_text(angle = 45, hjust = 1), 
    axis.line = element_line(size = 1, colour = &quot;black&quot;, linetype = &quot;dashed&quot;), panel.background = element_rect(fill = &quot;white&quot;), 
    panel.grid.major = element_line(colour = &quot;black&quot;, linetype = &quot;dotted&quot;), panel.grid.minor = element_line(colour = &quot;black&quot;, 
        linetype = &quot;dotted&quot;), panel.background = element_rect(fill = &quot;white&quot;)) + xlab(&quot;Event Type&quot;) + 
    ylab(&quot;Humans affected&quot;) + ggtitle(&quot;Weather event types causing injuries&quot;) + scale_fill_manual(name = &quot;Damage Type&quot;, 
    values = c(&quot;red&quot;), labels = c(&quot;Injuries&quot;))


plotPropertyDamage &lt;- melt(topTenEconomy[, c(&quot;EVTYPE&quot;, &quot;propertyDamage&quot;)], id.vars = 1)
g3 &lt;- ggplot(plotPropertyDamage, aes(x = reorder(EVTYPE, -value), y = value)) + geom_bar(stat = &quot;identity&quot;, 
    aes(fill = variable), position = &quot;dodge&quot;) + theme(axis.text.x = element_text(angle = 45, hjust = 1), 
    axis.line = element_line(size = 1, colour = &quot;black&quot;, linetype = &quot;dashed&quot;), panel.background = element_rect(fill = &quot;white&quot;), 
    panel.grid.major = element_line(colour = &quot;black&quot;, linetype = &quot;dotted&quot;), panel.grid.minor = element_line(colour = &quot;black&quot;, 
        linetype = &quot;dotted&quot;), panel.background = element_rect(fill = &quot;white&quot;)) + xlab(&quot;Event Type&quot;) + 
    ylab(&quot;Damage cost in $&quot;) + ggtitle(&quot;Weather event types causing property damage&quot;) + scale_fill_manual(name = &quot;Damage Type&quot;, 
    values = c(&quot;blue4&quot;), labels = c(&quot;Property Damage&quot;))


plotCropDamage &lt;- melt(topTenEconomy[, c(&quot;EVTYPE&quot;, &quot;cropDamage&quot;)], id.vars = 1)
g4 &lt;- ggplot(plotCropDamage, aes(x = reorder(EVTYPE, -value), y = value)) + geom_bar(stat = &quot;identity&quot;, 
    aes(fill = variable), position = &quot;dodge&quot;) + theme(axis.text.x = element_text(angle = 45, hjust = 1), 
    axis.line = element_line(size = 1, colour = &quot;black&quot;, linetype = &quot;dashed&quot;), panel.background = element_rect(fill = &quot;white&quot;), 
    panel.grid.major = element_line(colour = &quot;black&quot;, linetype = &quot;dotted&quot;), panel.grid.minor = element_line(colour = &quot;black&quot;, 
        linetype = &quot;dotted&quot;), panel.background = element_rect(fill = &quot;white&quot;)) + xlab(&quot;Event Type&quot;) + 
    ylab(&quot;Damage cost in $&quot;) + ggtitle(&quot;Weather event types causing crop damage&quot;) + scale_fill_manual(name = &quot;Damage Type&quot;, 
    values = c(&quot;darkgoldenrod2&quot;), labels = c(&quot;Crop Damage&quot;))


grid.arrange(arrangeGrob(g1, g2, g3, g4, ncol = 2, nrow = 2), main = textGrob(&quot;Figure 3: Comparative plot of the top ten most harmful weather events&quot;, 
    gp = gpar(fontsize = 20, font = 3)))
</code></pre>

<p><img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAABRAAAANgCAMAAABjsLRNAAABcVBMVEUAAAAAADoAAGYAAIsAOjoAOpAAZmYAZpAAZrY6AAA6ADo6AGY6OgA6Ojo6OpA6ZmY6ZrY6kJA6kNtmAABmADpmAGZmOpBmZgBmZjpmZmZmkJBmtrZmtv9/f39/f5V/f6t/lcF/q8F/q9aQOgCQOjqQOmaQZgCQkDqQkGaQtpCQ27aQ29uQ2/+Vf3+Vf5WVf6uVlX+VlZWVlcGVq9aVwdaVweurf3+rf5Wrf6urlZWrlcGrq9arweur1tar1v+2ZgC2Zjq2kJC22/+2/7a2/9u2///BlX/BlZXBlavBq8HBq9bBwdbBwevB1sHB6+vB6//Wq3/Wq5XWq6vWwZXWwavW1qvW1uvW68HW6+vW6//W/+vW///bkDrbkGbb25Db29vb/7bb/9vb///rwZXrwavrwcHr1qvr1sHr68Hr6+vr6//r/+vr///urQ7/AAD/tmb/1qv/1sH/1tb/25D/27b/68H//7b//9b//9v//+v///9DJnofAAAACXBIWXMAAAsSAAALEgHS3X78AAAgAElEQVR4nO29j38cyXmfOeSJNqj1Mgq4K0s6zC5D0o5WB25ky0hWPoeQs+ZqE8VHbHxWnHASy0CshPbeDRIcQaD/+uv60TM9PzDzvt1V3VXdz/MhhsBMTVV117e+Xf12dfWkAAAAy6TvCgyR+cTz4Lz8/VD9/evHk8m94y0fzEymB+0rWPFfjgtNBeeTo83vb2JqeVRLMVv/2v4sNAlkLLPZWZ1N6ltj2NgJgoKVRUqyhDhgiBGYVYZ42KgveD/d+N7VQ/fB/VdhqnnzzOSkqOBs1aXd9zcw1fQfuBSnW819VxaKBDLq2eyozhZqW+OYqb6+dw/oCbRLYCsYYnhunrXSfzk+PDI+VQ4vVyi7pu0Jm580Lkg52Dxd7Yl3fL825LQpdnXgvVVQ13FvNko/2RhAn6q+vncP6Am0S2ArGGJ4rh+30r/rghud6OZZ1TVDjTeuHurO5q8frzrxHd+vDaFsil0deG8VtHXcn43ST9YHhOs7QVJwWAsLtEtgKxhieK4eLvvM1UPTF0ozmxwUs9Liqr/LFKWwy0FfORg8dSfXq1Tns4sPZmvBw9MqnFgaqAk6HtnQ44F942heneeZkt2Isipu8Y7J4N6xqZAPizkjX6tNLTNX90XB7vvr1ZlNqgKXJdj6HS7eWuZeZVHblmXV1xMcFoutqGWxsfW13FyQ4XC1qvXqbOyd9dz81qy0WtUM1irLHI4WJ8aLbdvYx9v2wKL9i5X3tzfGcrv9tlSbBmHBEMMzX+2vVfDvd5/ZayxG7rZXzSc/MifBPjK4PoY4tZmcLjrM2nm4/5bpdDOTT9lJfrwMW/6wCjX6ZObX1eLuv7Kd9v4rU0E/5jDRxI3a1DKrbUtZsP/+enVOl1/3Kar6HRfrufsEK9uyKG0zgfXbe783WTHija2v5eaDsQcrVd2sTm3vrOfmt2al1Q4XJR/ZIo7cm7VKru/j7XvAF7myAw+KOxpjsd2LZtuqGmgLhhiexTWVslPO3Jjs0Hadg+oMbO58y7y6D9fsbr6p9dVTtfJbB1W08dSmPfXXtO2vZWY2Xzd+cba6KG7xzml1TcWd0pkSNmuzzMzWfaXgxUiu/m79jO7Uj3IO3Vh3S+5lgtVtWZS2kmDxtdP1K1XrW7+Sm/mGHWqdrgw6l9VZ2zub+9JtTb3VFpW3Lnn6nYduT9QqubGPt++BWW2EV3t/e2PUtvt0cZmmZWwGtoAhhue0MsRDp975xJ9qHlaRwZnTuDtDqk6JajnMNqfdrCbwWZoxi7ePmR+bLPr58tzO96P6CZazQXtSZx3Hjc6ONmtTz6y2LebvmkXX3q1PS7EpfA7zbbnbBKvbslp1n2DxNb+xyzI2tr5eldPq3L1W1Vp1NvfORm4u3UqrLTzIfH79+H9/fOjLXW/HxT6+Yw/UG2RlE7c0Rm27fbOFurIGq2CIwalfDjHqrkZEy7GY7VX+8F53zxrz9ck1q1c7/XUVk12Vjx/EHFV24v5zo1U78PAZLt6xvdJ1P1ef6oS3XptaZi7BsuBa36+9W7/k468o2K5r3GRL7ofFapa1qi8TLL9Wy8yxsfX1qpjAXRUhLBZfqOWwvnc2cqtGYrVWWxiRyXR2/8vSEDe2bXUfb98DK8O79WPoemPUsnDbstg0CAuGGJz1aypVH6qreRGdN8LeZogb0wNXRohVliYP94EzNtt//eDHvF+bubjwmsU7c3eCe+CrNrO+sF6blcwOVgpeDrLq79YPB/PlKbR5e3vuW7JcbuvcX9+ovrbMbGW3LLe+nluxmFVdGw/Wcti2d9b2pStpo9X8Vh/cPDu4fnzoDkv1Sq7v4217oJbT6n7f1hi1Wlfbsj5hHIKAIQZnXgv/ze3R3f5tu9nMnzwtTi3vnJGxaYhVQnsl9MAnOlzJx/aY2WJA6uJp1XnnUVEF+9w7s8WFEvOhH1Kt12aZWX1bbMGzhSvV361nMVtO/HamsZG7HQzVslyWtplg+cnKyfrq1tdz878Yf1ma9LI6m3tnc1+6X1darT5/Z24c2LyuTnRc28fb90D9jpeVPbOtMWrbvdyW2fbbmaANGGJw6la2jNX56x3LqRqu8/sPl3bnRz8bk7sXb5hTLf+t68fmLGwZ8K/OtI4WyfxcloNlcYt3lrEqU/zRzJ0brtWmlpkftSwK9uOoYrkRtjq1kaw/HbcFu4DbxraWb6xsy7K0jQQuKrjIrKrf2tbXclsMEo9qVV2pzvre2dyXrqSNVqsq94cmIPK7a5Xc2Mfb90B9guPKntnWGMss6nN/At8RCAWGGIH6vGl/kbG6pmzdruxZtej8qZsqUp9HcrAYZdSZTfw4xV0DsFdAJ4tT1MrYbPzddtBFmGq2iEwV9Xdcv63e/qePD7bVppZZtS1VwfUBzPLdeiet36WxvHJRy91XobYty9JWElRfW9lYV7+1rV+poLsgYkdxxeYXNvfOZm6zxTWV1VZzW22uMN88s9eZa5Vc38d37IGVO17qe2ZLY6zUenERveUdUbANDDE069dUlnE7Pwd7cv/3ayeC/sP66VMVgFo5+V4G3o+W31oOTU4XPebq4e/YHA5WvlIVt3zHzvP1Y6eyt7tKr9emlpkraFlwfX50be7fyjWVyeLs/rQ2K/JoJcFKlsuqbyY4Wl7dqFnq2tavVMVt6kG9qvXqbOydzdxcSfVWq13JOJ04o/QDucW2re3j7XtgNX5Q3zNbGqO23W5bFpsGgcEQQ1PvM7UrGUf+eqWdJ7w4GSu2LW2zuNOidp9KlU3VB6xtLqeorFxTWb8tojb3uvaOnfNXnb6eTrbXppaZT7oo2M0ZLJZf80HKFcewd2kUtZPq1W11WSy+vFL1tQS1c+VaGRtbX6+gm5h9uFLVleqs752N3Pyv9VaredBsshi/rm7b+j7etgfWbsCr75nNxqhvt9uWxaZBWDDEjlDeA9ucoIGlbqNUxMSgbzDE6MwmixhTF+hWY+kys8RKA9gEQ4xO7Y7ZDlg5Z00qs8RKA9gChhifeuyvg8IClhQ0s8RKA9gChggA4MEQAQA8GCIAgAdDBADwYIgAAB4MEQDAgyECAHgwRAAAD4YIAODBEAEAPBgiAIAHQwQA8GCIAAAeDBEAwDM8Q/zbAN9tk0eD4na9A1mTkRrBkKEhnppV89yjImcbK4rePDPPOmu2Er35bv3/Nlx/tP2BaPPlkzDqxZTJy3+28nd8EdIkZzXW3l5PMVoZZmiIVnenPzzYqpVUJHgXp8s1UNcMMXLBEIes1QgbZGiIVx+8Km6e/+TjV9ZGbp65Z07aZamPzF8H149/9HDiny1uPrt5/mP/RDP/hnWl04Pqz+uPPjPp7Xd9ogObZHZgPzKL/1fFzCa1B7jVCna6n5vnudsUdsj32cPqoXH3flw9hbnMrVbVxbdN8v/DVr62TbP15/FBcuSsxtrb5lf/HVvBn4xVhhka4s2zo+Lq0d+Z1w9e2eNneZS2rXl6/5U7JpftffrgvPps8ayO6o25fcLu0fK7tfQ+2dw+cvfIfjS7/6r+zblXk8ugKriSk09hBeayvX5snnPpH6lyelCsVtV/u37KvKUwSJWc1Vh/u2aIz6wtj1SGGRpicVoq5LCYlf8OXEsZURrmNZfxajCfLU46qjdMgtrnSyUsJWjeKxVuPypfqqQ1YdQ1Ml+VYFHUj7hze5RdGmK9qotv1w1xS2GQLBmrsfb2iiEeFuOVYY6GOD8oTs1h+bx8ndkn2pmYtnmq96oEq88qhS4Tl7ZU/qv+3CZB+/mBi+2Vfy+zqh6Cvgyhu4KXmdgUNYHNbNi9bojLqi6+XTfELYVBsmSsxrsM0X1jnDLM0RCvPvjShGw+/ovnxwshlDo4XD8mzxbnJuuqmd//skyz/O4WCV598BfPjpYSXF5APPUBFf9WVfAiauNS7DDE1ar6b68Y4mZhkCwZq3GPIY5Shjka4s3zzx6ZS3s/Kl8ro7FnAttOUoqaBBeD/+vHP/pgGRjZKsGbZybJyklKVbxL5t+qCq5J0KTYccpcr+ri2xunzKuFQbJkrMbdhjhOGeZoiMXph3ba14eH/uHm83u29a4e3juuS7D6bCHB6g1zunKw/HOrBF2SZYS7Vsx37dHSfMuHjVzB5jqh032ZYi0mY/OxVa9/43Dx+9pFlY3CIF3yVeOqIVbfqQxxnDLM0hDnNqZx9dC8mgiHEZWZ0GLPPMxEB3949J8tJLhIvPrd2hwFd8nD/m+TXD/+oZt6UCumCqhcuSkQVcFmOsNn5WH8dDGPpsrWTnTw5x8mhliravW7M0RbeT/fYa0wSJZ81bhqiNV3KkMcpwyzNMROMBPMGs+q3WC+cRcDgJzYahztnSnrYIh3MXPXgNtLcG6HBWOJwUAUYqtxPOfEe8AQt3P10B5EgxyTZ5PlDcwAeqKrsTo9BwwRAMCDIQIAeDBEAABPFENUZqqtA9n3mD474u5vkveTPBqp1AMAoHcwRAAAD4YIAOAhhjju7Id/REwq9EXyQMmj0bAek1TqD4AaIRgYImQPaoRQYIiQPagRQhHFENMKk5F9yPQpslONSYW+SB4oeTRaGuJETrg6A6xQiev/FdNvfSFdMETIHgwRQoEhQvZgiBCKFAwx7yhc3tknE7tpQ0hDTCpSRvLOaVkPRoiQDowQoS0YIgwGDBHagiHCYMAQoS0pGGLeUbi8s08mdhOCEIaYVKSM5J2TgiECBIERIrQFQ4TBgCFCWzBEGAwYIrQlBUPMOwqXd/bJxG5aMXE/KkOcbP+Z3PH+HT8TRVqXuS5/1c9g694hDYvjThVIB+5UgVBgiJA9GCKEAkOE7MEQIRQpGGLeUbi8sx9EDJF7mUeXPBopGCJAKxghQigwRMgeDBFCgSFC9mCIEIoUDDHvKFze2ScTu2kDMcTRJY9Gy3owQoR0YIQIbcEQYTBgiNAWDBEGA4YIbUnBEPOOwuWdfTKxmxCEMMSkImUk75wUDBEgCIwQoS0YIgwGDBHagiHCYMAQoS0pGGLeUbi8s08mdhOCEIaYVKSM5J3TZmL2RGmI68s+8pP+TxZwpwqEoo0hFkpDBIgChgihwBAhezBECEUKhqitQ+ToxKiyz+e8eAfcyzy65NFIwRABWsEIEUKBIUL2YIgQCgwRsgdDhFCkYIh5R+Hyzj6Z2E0biCGOLnk0WtaDESKkAyNEaAuGCIMBQ4S2YIgwGDBEaEsKhph3FC7v7JOJ3YQghCEmFSkjeeekYIgAQWCECG3BEGEwYIjQFgwRBgOGCG1JwRDzjsLlnX0ysZu7uJiWnBRn0+knr8vX8mXldYUQhphUpIzknZPCxGyAXdz+229vf2nM7/LJt2v/XALuVIFQYIiQOt+8Lt7//MX0aXFxUrz/4k39tfzUjCD9crYqQ5zwk81Ph2CIkDiXT8ufT98UFy8vXha3X7+pv7oUjBAhFCkYorYOkaMTo8o+mdjN3XzjQ4WXJ1tHiEVYQ4zbPCQPlDwaKRgiwN28/9NvjRkW5QiRGCLEBkOEtHn3M/N6Zi4133WVGUOEUGCIkD0YIoQiBUPMOwqXd/bJxG7aQAxxdMmj0bIejBAhHRghQlswRBgMGCK0BUOEwYAhQltSMMS8o3B5Z59M7CYEIQwxqUgZyTsnBUMECAIjRGgLhgiDAUOEtmCIMBgwRGhLCoaYdxQu7+yTid2EIIQhJhUpI3nnpDAxG6AV3KkCocAQIXswRAgFhgjZgyFCKFIwxLyjcHlnn0zspg3cyzy65NFIwRABWsEIEUKBIUL2YIgQCgwRsgdDhFCkYIh5R+Hyzj6Z2E0biCGOLnk0UpiYDRAERojQFgwRBgOGCG3Z5VMXdz/WZ/F1DBGSAUOEtuzwqcvpSXHXgx8XXw9hiHlH4fLOPpnYTQhCGGJSkTKSd87d9Xj3x789KbY+GnxaMnHfVRmi/w4/Gf1kBSNEaMudoi+977I0xJfF7ddv6q9rX+eUGZIBQ4S23OlTF2YceLJ1hFj/OoYIyYAhQlt2+dQlMcTBZ5/fefEOQhhi3OYheaDk0dhjiHddZeZOFUgH7lSBUDT0KQwR0gFDhFBgiJA9GCKEou5T14+9d91/tfdrIQ0x7yhc3tknE7upodChY+InCakM8Y6JRpM73r/jZ6KbyDSJOklqsHXvkLXiTg/Ll9nB/q8xQoSISHXoYIQIoVj1qeuPXy1ed38NQ4R4iHXowBAhFKs+dfPMHpkfnO/9GoYI8RDr0IEhQijWfOrmWWldgjMVYogDyT7FGGIh16GD9RBHlzwaLevBCBHSgREitAVDhMGAIUJbNk+ZH/zmo2P51zFEiIBWhw4MEdqycVHl6tH5XBrMJoaYffbJxG5WUOvQEcIQk4qUkbxzNqbdlEIUT3dghAhRUOvQwQgR2rJthCie7oAhQhTUOnRgiNCWbdNuFDrEECEGWh06MERoSwpXmfOOwuWdfTKxmxCEMMSkImUk7xxu3YP04NY96Im6Ty1WGeHWPegRhQ4dGCKEYtsIUfI1DBHioby+jCFCKBr6FPcyDyT7ZGI3beBe5tElj8ZaPeaTo2J2b/8dAowQISZSHToYIUIo1k6Z7d1SVx9wUQX6RKxDB4YIoVifmH1UvgpumcIQISJiHTowRAjFmk/ZC3yCR1kQQxxI9snEblaR6tBBDHF0yaORwsRsgCAwQoS2YIgwGDBEaAvrIUKCsB4i9APrIY47+2RiNyuwHiLJe4L1ECE9WA8ReoL1ECE9WA8ReoL1ECFBWA8R+mFltRvtKQoxxOyzTyZ2U6OBDh0hDDGpSBnJO2fVEL9ktRvoHYUOHdypAqFY8alT7137bxHAECEech06MEQIBSNESI1VHZ5Np5+8Ll/Lly2vFgwRQpGCIeYdhcs7e0X6uWnFI0lKe0lElnQbKzq8/aWxvcsn327959JwL/OYksfVIafMIGReyuLqu7K7R6TptlPX4fufv5g+LS5OivdfvNl8LRNPS4y4JkpDnPCTzc8KcXW4WhyPEIA7MUK8eXZoFqJ5cD6793uT331W/uL+LI/F33l4ZJzs0KYthVgmLU4P5mW6B+fLD2TUdHj56Zvi4uXFy+L26zebry4Np8xjIq4OG/oUhjg+nBAPzG/3jmf3jueTo6uHR/7P+6/K38vX68f2DMUcmWcPfvP4qPzs+vHh8oNGXJ7sGCEWGOK4iKvDNZ+aLU5VdkMMcSDZa2I37shsjrJWeaXGrtzRuPzTHKKP7KmuPQIbIV5/9NkHr8yXTg+WHwhZ6vDypChHiMQQSV4RV4drp8wfHc8PitmBrP4TpSH2HYngR/9Tw8duTh+cz2tCXPxpjsyLe0ts7Ob0wwPzcBRzZFbedFLX4dl0erLt+nLtKnMFI8QxEFeHa4b48Sv3T1q5ICNEyAJ/da/87zv2rMQJ0f1582zyO4/Nq7/fzgrRPClqfv/3XWhHdSOeWocODHEMxNXhqk/dPD8u/4kf7oMhwoLN4Iw5lM/FzwGoo9ahA0OEtjpc86lSg3NNtCeIIWq9Mm4wY1zZq9Nv5+rh5qF3ZnTUzBDVOnSEMMS4zUPyQMnvoL0OW9aDESKkAyNEaAuGCELSb1IMcQzEbU0MEYSk36QY4hgYviHmHYXLO3tF+nEYYlKRMpJvIUlD5E6V8ZFuk3Knypjo1BBnD85nkvUhMMTx0WWTSnVY1cz9jyGOgS4N8fqj4/KfYP4Xhjg+OmxSsQ6rmrn/McQx0KkhfvyqPDZ3bYh5R+Hyzj7NGKJYh1XN3P8hDDGVSBnJ76JLQyxmE7t6xP6vMUIcHdua1EyEXcyf/nM/I9bfdffn+gcrL5DqsKqZ+58R4hjY1poLpdUl10h+XFQBIVsN8XvLz6+/vzTE+p9d1Mz9jyGOgZ2G2BoMEYTsMMTTyeSgfDlwv7gRYvmnkaldknPe4oECopq5/zHEMXCHIV59+NCsE1v+UmryF8ezD+9/2UR+60s8WaGzHuJosm8ZQzSnzPeNBG+eH5dDQv+LW6vm+0ad84Py/PfoF8fF36pqJdVhVTP3fwhDTCVSRvK7uMsQH5077XlDtAdmvfzWLqpolzVmhDgedowQZ2ZxTnOO7H6pGaJd6fWw9E3VQg0Nl9dmhDgG7jJE64NLQzwsGslv4yqzrnIY4ni42xBL8bkRov+lPkL0SiyP34qiGoaEMMQxsNcQH51ff+QNUS+/NZ86Va64hCGOh7sNsTwC3/vB0fXjB//V/eIM8fGD37ggzsSs6a4b8ml16MAQx8A+Q7x5Nrn/A2+IevmtnzJbocvXsAtiiHlH4fLOPtF5iFodOkIYYiqRMpLfxc7WbH25OYXFHSAL0m9SRohjYFdrzieC50HtBEMEIek3KYY4BuK25sadKrpTFQxxPHTZpFodOjDEMdClIcofQ1p9PYQh5h2Fyzv7QM+yCIxah44QhphKpIzk/bAx7Ub2+EfuVIGIKB9Dyp0qEIpVnxI//hFDhIgoH0OKIUIo1nxK+vhHDBFionsMKYYIoUhhcYe8o3B5Z59M7KYN3Ms8uuTRSGFxB4A1+lvcAcbNxlVm4dcwRIiHWIcODBFC0XBxBwwRIqK8AcuKa6I0xAk/2fx0yFpxM2EcmxjiQLJPJnazilSHDmKIo0sejXVDVMVuAhkiwBrcqQL9sOpTytgNhghRUOvQgSFCW9YMkQViIQFYIBZ6omEMcfH1EIaYdxQu7+yTid2sotWhI4QhJhUpI3nnrI0Qe1kgFmCVHheIhXHT0qcwREgHDBHagiHCYMAQoS0pnDLnHYXLO/tkYjcr8EwVkvfEtnoIItrcqQLREV9Z4dY9CMU2n2KBWEgBFoiFztnmU3NzqnL71XT65NvibPrJ62Ll1X0NQ4TYzFntBrpmawzRPNX58mnpgC8vn3y79s9/jXuZh5F9MrGbFWo6lMC9zKNLHo2d9bh4eXFSvP/iTf21fHta4tehUBli2zUv+On+JwsYIUIodom+HCRevCxuv35Tf/Vfm1T/BxghArQCQ4RQ1H3Kn6hU0x3OypPmrSPEAkOEiKzpcD8YIoRi3afmD87dL7dfvSxfiSEOPPtUz4sXOpRADHF0yaNxpyGemUjhyV1XmRdfVxoiA0oQoTLECkaI0JY7DVH4dQwRYoAhQi9giJAiGCL0Qo6GmFYULu/sk4ndrNGbISYVKSN55+y4yiz6eh+GCMOmgQ4djBChLS2NB0OEdMAQoS0YIgwGDBHakqMhphWFyzv7ZGI3IQhhiElFykjeOQ3r0XRidhBDBFiBO1UgFBgiZA+GCKHAECF7MEQIRY6GmFYULu/sk4ndtIF7mUeXPBo5GiLACowQIRQYImQPhgihwBAhaRbP9jFLLe15wg+GCG3J0RDTisLlnX0ysZu7cM/2uf2lMb99q3OGMMSkImUk75wcJ2bDyLh4+f7nL6ZPt6/fXnvCj8oQJ/xk89MhGCKkTjlIvPz0jXnk2R1P+KnglBnagiFC4phn+xguT+56wk8FhghtydEQI0cnRpV9MrGbu/DP9jkxJ853xRArQhhi3OYheaDk0cjREGFELJ7tU77se8IPI0RoC4YIgwFDhLZgiDAYMERoS46GmFYULu/sk4ndhCCEISYVKSN55zSsB3eqQDpwpwqEAkOE7MEQIRQYImQPhgihyNEQ04rC5Z19MrGbNnAv8+iSRyNHQwRYgREihAJDhOzBECEUGCJkD4YIocjRENOKwuWdfTKxmzYQQxxd8mjkODEbYCuMEKEtGCIMBgwR2oIhwmDAEKEtORpiWlG4vLNPJnYTghCGmFSkjOSdk6MhAmyFESK0BUOEwYAhQlswRBgMGCK0JUdDTCsKl3f2ycRuQhDCEJOKlJG8c9pMzJ4oDVGV3teNn35/soA7VSAUbQyxiD5C1GYPowRDhFBgiJA9GCKEYliGqE0fYpdo92Ba2edzXrwD7mUeXfJoYIiQPYwQIRQYImQPhgihwBAhezBECAWG2HaXEEPsHWKIo0sejZb1iOdYkbOfNMke0oYRIrQFQ1RkD2mDIUJbMERF9pAo/r4alSH2de8PP/qfDsEQFdkH2YPK9JGzTyZ2E4IQI8S4zUPyQMmjgSEqsoe04ZQZ2oIhKrKHtMEQoS0YoiJ7SBsMEdqCISqyD7IHiSFGI4QhJhUpI3nnNKzHMCZma7OHNOFOFQgFhqjIHtIEQ4RQYIiK7CFNMEQIBYaoyD7IHiSGGBzuZR5d8mhgiIrsIU0YIUIoMERF9pAmGCKEAkOMWB3oBgwRQoEhppN9kAYihtjOEJOKlJG8c5iYnU720BJGiNAWDDGd7KElSkPEP2EDDDGd7KElcQ0xbnJIAwwxneyDNNAYY4gVSTmcMvlWkgrbJZU8GhhiOtlDS5JyOGVySAMMMZ3soSVJOZwyOaQBhphO9tCSpBwubnKIBIaYTvZBGogYYiKWFTf5VpKK8o0rhsjE7AjZQ0MaTszOOTlEAkNMJ3toCIYIocAQ08keGoIhQigwxGyzD9OgQ/BiDNHvB+Vuyzh5NDDEbLOHCgwRQoEhZps9VGCIEAoMMdvstTtzuIzQEJXJQQqGmG32YQxxCGaJIfabfHujKNtQlzwaTMzONvvYOzM/knIJkgdK3i0YYrbZY4jrJNWPSR4oebdotH82/eT1+tfT6sPK9HlnP3JD3KLGpPoxyQMl7xaF9i+ffFv+W/t6Wn1YmT7v7MdtiNvUmFQ/Jnmg5N2i0P7FSfH+izflL9OSif8uP8P+SRbUOKKfDlEUd/GyuP36TbyqAMhBjRADjSFWx2SA3kGNEAOFIW6L2rTOtEFysu8zfSqI1Rh3f5O8n+TR0NSjdl0vi7g7DBnUCBFoKCUkCOmAGiEUGCJkD2qEUEQxxLTCZGQfMn2KhLxZm+RZJI8GI0TIHtQIocAQIXtQI4QCQ4TsQY0QisaGuHbX6+pds2t/r3++9vdkz+ct00/25dcu/WRvfVuln+zfH9HSF5kw2bW1cdUStzUn+/Ibyd8d0rTMndB1OjMAACAASURBVJsw1W3ydF9+7dJP99a3Vfrp/v3RJv1UsL9jpS9yYdfWxlVL3NacCrav9vd0X36rf091BjXVGdpUtP8Wf093fd4hUcqc7k/SIjnZ95k+O+Lub5L3kzwaGOK4s09GiNFIqh+TPFDyaGCI484+GSFGI6l+TPJAyaOBIY47+2SEGI2k+jHJAyWPRj6BcwCAyGCIAAAeDBEAwIMhAgB4UjDEi6d55w8gJK4UEXp7EjBE/HAnFxuPH84pe6iTlh8m1fSpVCaKIV5MpyeKxPK0Ve5T2bNdGuf/MmZ1VMmL4rd/9LlCKpGzzxGVGpU7UJs6phTVuUdVllaIqegwhiGelQ1zJj1aXTy9/UrVkPY4eCHe1+r8Te2Lt/Gqo0pu+OYv5VKJnH2OqNSo3IHa1DGlqM49qrL0QkxEhxEM8d3PzOuZrHFuf13+aBrS7+Qz4ZFTnb+t/Zn4YKusjjK57Q3vfvZOKpXI2eeISo3KHahLHVeK2tzjKkuZPCEdRjDES9sq7/5YfnRQycQ9fPJCczDU5G9qf3Zy+5WsKd9qq6NL7s72vnktlIq2Nsrss0SlRu0O1GsxnhR1uaubXrWpyv2Ykg5jjBCt+N7/qUSCf+8eNa52xNtfynadMv+3Ve1vvxY9A/3dixNVdQpd7c2R9q+mJ+/+rLj9hyi1UWWfJxo16negInVcKao7krrpFZuq3o8J6TBWDFF2cHj3Qn0B48Q2jfAUSJm/aUgXb5Ie9I0AxdXR1v6yTF6ee1xMPxW5s7I2+uzzRK5G3Q5UtmZcKSpzVza9Vrg6Iaalw7CG6C4t3X5V/icLY5etfSZMWizj45fyEJ8qf3eAPRPX3n9DWB1t7S+emhiMicaID5yK2jTJPjPUatTsQLUW40pRlbuy6fXdTiPExHQY1BD1l5bef/Hm7ORS2JK6+Lg+/0J37l71N+E3tLU3O9OMDoQTtJS10WafIdrroqodqNdiTCnqclc2vXJTlUJMTYchDbHJlSjN5Cnl1Rpl/lpHsQWYUxVhCdralycQ7z7/aazaqLPPDu0Vd90O1LVmXClqc1c2vfYiqWo/JqfDoCNE3aUlezTTXIzWxMcb5K/0t/KIphoM62pfFvDpf/wX//kfhJEVdW102WeJSo3aHahqzbhSVOeubHrVpqqFmJoOwxmiuc6luLRkmtHOK5COJ0t5aOLjyvyVDWmuAX6u+Ia29rZKYo1oa6PMPkd0alTuQGVrxpWitiMVqqbXbWoTISamw2CG6K5zya+4lrvh8snfVBGKvdjA7j9TXK3R5f9W15B2wpT9hizyoa29u64nlYq2Nsrsc0SnRuUOVLZmXClqO5Ku6XWbqhZigjoMN0J017mEl5belrvhr02bfyPbc9oYtjJ/M8lB5SiXRh/ieaTqCLy/rncprI6uNursc0SlRt0OVLZmXClqO5Ku6bXCVQoxRR0GMsS3uutcduamOTCc/YnsUrsysKvO3wSwxQ353177E5R3L4QnQcqwtEqH6to0uVqfFzo1anegrjXjSlGbu7LpVZuqFmKSOgxjiHYaqeaCsZ2n9Okb8c7QXpHQ5u9kKGvId5//9Mm3motB+uspCh3qa9Pg3sq80KlRvQOVrRlTiurctQMLzW0+aiEmqcNAI0TbiKqdMZVPITaor0jI81fPt7l8+u7F0wvNHTbKCLzuup6qNursc0SnRnVzKrUYU4qa3Js0vWZTVfsxWR2GiiGaRpSuEWLDwP+oW6tIc/eLKv+yZVSTHMyJwTevSw1qQsHy2rs5FGIdamujzD5X5Gps0pyK1owqRXXuhbrpxZuq3I/p6jCAIS4Oa8LrXD4MLD0O6iaTaPPX3lzz/ldflZo1Gyq70UhZe3+iJ9Whuja67HNEp0blDlRrMaYUlbkrm163qdr9mK4OQ4wQdTOaC93Uo4uXTRxRmr9vGd0M6xcvxXO+lLVvsMinqjb67PNDq0bFDmygxbhSVOSubHr9pmr2Y8I6DHLKHFMmT9+67OWLHivyX7SM7k7KM+ni6Mraq5cQ1dWmWfbZoVajdAc20mJcKUpz1zZ9o02V7sekddjWEF08Vz6N1CeUTj1ysYYL+cJDVbVE+d/+Srtcd5Xtf/9PouRNaq9Yn0FXG232GaJVo2oHKltTJ3W1FD2aOXy6lT80m9pAiKnqsKUhurV7xIc19XPBzK3fL17qn58jw87P0LSM8rE8ytqfufM8cYV0tfG5J6vEACjVqNuBytZUSl0tRQ3aptcKt5EQE9VhO0Os1u5RJL9U7QZz63fEG3tso2haRvckHF3t9ZfbVA8JSlJ+QVGqsVA2p6o11VJXS1GOvum13W5AQmxliLq1e94ubrtUEPlGR81UyAZPwlHV3s5aEE//0NZGl3uOKFeS0jenYrWNBlLXSFFHg6ZXCHdgQmw3QtSs3fP+X73W3Xb51hcRaddpp0M2ehKO6nq6fZCtcFihro0q9zxRrSTVpDmlramVeqOZuXJ0Ta/sdkMTYgtDNLtC0+EvlbddvnD7LNqt36rpkHbSbIMn4ahrL19et8lzeRRrRGWGTo0Nm1O82ob2Vn3VzNxmCJte3e0GJsTmhuiWqlA44vsv3qhu6oweddUsC+cnzcZdyPL218JpDtrn8tgrnuLcc0SnxtjNqZV6xMiQuunVNw6q92PSQmxsiNVSFbIjib3F0bxoIiXxoipmPPFSdV6wmDQb5Uk4fkv/509lj07TPpfHXfGU5p4jSjXGbE6t1JVS1NZG3/SKbqcUolLmvdDYEFVLVbz/92flPlDcxh05qmIP3W/F5wUN52+LqaaLyJOrnsujv7ifHSo1Rm1OrdSVUlSibHplt9M+B00n835oZojlpqmftHA2PVEsKRI1qmLHE2fiA2HsmfXayUvK5/I0ubifFUo1xm1OpdSVUlSibnpdXF0nRP2sqD5oZIh2HK5aqsJeg7rQ3Mgdc76NfQTFye1XmsNVvC6kfvCY9rk8uov72aFXYxGzOXVSbyJFBeqmV3U73WX91J6vt50mhnjhZ5prlqrQLHDvZrJHdEQ3nrj9WlRA7Ds8Lp78VjtdRHVtv2wj1RXP3FCqMf4NO6p5WSopKtE1vbbbKYWolHlvNDBE5VoVfkfL5ylVeUeab2PPaZ4W0vFE7EG+jfLINaK9tl9u6f9SXvHMC6UaozanVupKKWpro2p6bbdTClEp8/7QG6IyBLPY0dJV0aPPZDd6PROPbiNXx0W9xVLRXU1dPoot4gX7ftEGBGM2p1rqSinqUDa9cscohaiUeY80vMos16BagfFnsivOaS6exq1OFfVWzPgtNI+hcOmHOjqsEKsxbnM2MFvV6bUOZdMrd4xOiFqZ90jTaTdyDTZTYNTr8/LT9+rQHa06yqi39jEULr10KfNskd9u5IjTnE2kHs8RGzW9eMcohZjPdb1wz2XeiXRH/705vEacye4XqROe0/h4fazq2P4pj3qrr6baEJXy6uuQidycHvm9lxopKlE2va7bKYWolHnPRDVEF2RWKNCs/f4y6kx2zXLKPl4fqzp+vCKOetvkqmv75fCjTP+v/2Wy90l1StTmVEtdJ0U1qqbXdTulEJUy75uYhuiPHxoFll85i/vYGfnC6JHnYy9W3xQ+RLLJZRF7QvYf0o9kd0HU5mwgdY0UG6Bqek23UwpRKfPeiWmIDYLM778ojyOXUS1Rt6J/vC6knC7S7Lk8EYP2WRKrOZtdvNY/GkOBpukV3a4b3fZHREN0D4RUBpkjPSygeRGR2lP5DI3Gw5s4Iap8ibQmdROpF5HVrml6cUWUQmz6qJj+iGeI1SU93RU9+YySvNE9Q8NHqLJS1ohoJvWUkHY7rRCjPiomCtEM0U7F/BN5kLkKMecrKh2aZ2hUF/OyUtZ40Eo9JXTdTi/EiI+KiUMsQ3RTMf9vcZB58WDswc+Zq1CoJPHHUIwcrdRTQtntGggxJzM0RBsh6qZiNnsefa64kJPiMblpP4Zi7OQz63gdbbfTCVEr8ySIF0PUTMVs+jz6XCm31Mz90oXUxxJMyI9sZh2v0bDbiYXYSOY9E8cQ7RV8+VTMyM+jT4u35i4CzaRcM4Er6cdQjBql1FNC2+1UQlTLPBGiGKJbeEgxFTPy8+hT4t3n9omNcqnYhdeTfgzFmFFLPSV03U4lRLXMUyGGITa4LpLDwkCBuHxq58xqHojCvcipkvklQNVjw3VCVMo8GYIb4ttma06NxBH/22sbgpHfRZDJwuujpKHUU0LxJGuNENUyT4fQhmgOmY0WHspgqbT2lIp68q3ZPdLldp58q32ACnRFY6mnhHSBV5UQtTJPidCGaFdIY82pu7h8+u7FU/HDB5cLJ0F6jEjqWiHqZJ4UUQyRNae2Yk4k7NRWobL8Q3VxxDQZj9R1QtTKPC2CGqKZien3AmtObfD+V1+VJxLm7OpWNjmzeqjuKKIJmTEmqeuEqJV5YgQ1xLeFvf07zkNzhsC7Fy8V06vzvQNi+IxK6loh6mSeFiEN0U46yjNy0BlnU82U7EzvgBg+I5O6WogqmSdFQEN0NwJxx+0e/vt/kqRy94HmeQfE8BmR1JsKUSbz9AhniD7ymvEUhISwPc7MdcjyDoihMyKpj06IwQyxiry+/3eZjpVTwt/xlG0gZtiMSOrjE2K4ESKXAILxtuxvRoiDn9+WKaOR+giFGDCGyCWAQJh1140Qb385+B6XKSOR+hiFGPIqM5cAAmHW1LwczeKQOTISqY9QiEHnIY4m8hobK0R2ZsKMpHXGJ8SYz2WGBmS57joMj5EKEUNMjRzXXYcBMk4hYohp8bbIcJVhGB5jFSKGmBT2wd6jFCIkxWiFiCGmhY3ZZLfuOgyOsQoRQ0yM0UWxIU1GKkQMMR0u7AJ7t1+N5z4pSJIxCxFDTIW31SLto1hEBZJl3ELEEBPBRrHdLWFjPDBDKoxciBhiKtiYzeUnr8/GsAYzpMu4hYghJoO9RWqcgRtIiVELEUNMAbfC3j+O87oepANCxBD75+KpX2FvpDMdIBEQIoaYADyOHpIAIRYYYv9cuLvnxy5E6BuEaMAQe+biqT8/4XH00CcI0YIh9svtr0d7kxSkBEJ0YIgJgBAhCRAihpgECBGSACFiiAAAHgwRAMCDIQIAeDBEAAAPhggA4MEQAQA8GCIAgAdDBADwYIg1rh5OSu4db/vog1dFcfPMfD55cN55zWBkIMWewBBrWKnt/mhHEoBgIMWewBBreIldPTovbp4fXz+e3H9V/vGHk8mR+71KcnpUvv2bj/+5PYIvPgIIBlLsCQyxhldhqUCjxNPDYnZQnrscFvMH5yuH5Xn51uH14wfn81J/LhlASJBiT2CINVzg5sH5rBTW4fVHx8X1x6+M7MqfFRVef//8F+VR+8gevF2ynmsOAwMp9gSGWGMhtUd/Z09TTFR7mwpvnv/k++dGfuUZi0/WZ7VheCDFnsAQa1RSu3n+2aNzf6zdpsJi9sPDwqjQHJY5JEN4kGJPYIg1FtftZpPDwkRkfMRmQ4VX3y1PTh4fmM99sv4qDUMEKfYEhljDBW4mR1Zl5ppdef7hVXjzrHZpr7j5g1flYfkH1aU9TlMgMEixJzDEJlx9r7DnKQA9gxTDgiE2YGYPx6gQegcpBgZDBADwYIgAAB4MEQDAgyECAHgwRAAAD4YIAODBEAEAPBgiAIAHQwQA8GCIAAAeDBEAwIMhAgB4MEQAAA+GCADgwRABADwYIgCAB0MEAPBgiAAAHgwRAMCDIQIAeDBEAAAPhggA4MEQAQA8GCIAgAdDBADwYIgAAJ6sDfFvA3y3TR7BSKISEIzBCHN8pG2Ipwfly3xyWL7OHpyvfXjz7LC4fnzUKGPz3fr/bbj+6LhdBtsqMb//ql2mEJPBC3O0+kvbEK3YTn94sFUgqeiuNRhidgxemKPVX9qGePXBq+Lm+U8+fmWPdjfPJhMjxKuHk8nkyPx1cP34Rw8n946L6rOb5z+2fy7esIfy8sX/ef3RZya9/a5PdGCTzA7sR0YGVTGzic/Klrgs2IndKMalKKvmsy0Pyo8n937stFTl56pUL79WiPnQUFXCllZl4ou7+m6Z5mBua+zfWiSp6grdkrMw/Ze269Iwav2lbYg3z8r2ePR35vWDV/agWR6abbOf3n/lDsRlq5w+OK8+u3nmm6d6w8ij/MLyu7X0PtncNuyR/Wh2/1X9m/446TOoCq5051MY3flsrx8flpqpvlTlZ9T3rFTTqS+/Voj/cFGJqk4mXVXc1cOD8uzsoBTm8bIGrpwqm35aZ8TkLUz7pa26rIoer/7SNsTitJTFYTE7NIOnuTtKulOReaW7pQTMZ4szjeoNk6D2eZW+rjvzXilr+1H5UiWtnTTUzx/mq7orbKhm8Y49gC90txCfHVGYP9YLsR/WKrEorSpybgTpjv3VWVitnJVdAh2SsTDnS9/b0OXi89HqL3FDnB8Up+ZYfF6+zuzJpQlklwP2yaruqs8WjbNIXJ53lP+qP7fpzn5+4ELQ5d/LrOzJgc2sOga6gpeZuNOHpe7sOe9SjjY/WyWroPKPzUKOViqxKM0r1RRXHpltZl605q2qnOUugW7JWJj+S1t1ufh8tPpL3BCvPvjSxGk+/ovnx4vWL9vkcP1APFuckKxLZX7/yzLN8rtbdHf1wV+UX1vobnkGcOpjNf6tquBFqMalaGSI9frWKrEozY4MXHE1QVZvLQQ5qLOVnMhYmFJDHKf+EjfEm+efPTLX835Uvi5G8aYVtp2ZFDXdLU4mrh//6INFzGW77m6emSQrZyZV8S6Zf6squKY7L6bdp8xHd5wyF3VDdJVYlFZltirI6q2VUxbogYyFuUiwRZeLz0erv8QNsTj90M71+tDKo2yG+b3jub0AZi6QHdZ05D5b6K56w5yjHCz/3Ko7l2QZ1q4V8117IDbf8rEiV7C5OOjkYCLNH61ka/Mp6vlZz6sFr2uFLA3RVcLV6cB+uSquLsiVTV9udtetAlkL035pqy5d0WPWX+qGOLfhEhPXddMOzM4/nUzc6YaZ3eCPif6zZYC3Srz63drEBB+wc5MJ7PHxh24KQa2YKlZz5eYkVAWbSQeflcdWl6KmOzcdoTqPcfm5KlXTG9YKcR8uK1FV3c5p8MXVYzj1GvzYZr6cggFdkq8w/Ze269LXcLz6S90QO6E6cQiT27wyxC357SjEX2NWlwPDJYowt9GkjGHqD0MsmZnTkxC6m9uxgDvp0RriTHGtrl4ODJcowtyGsowB6w9DLM8g7KEuyIF4tpyEoDNEX4kG5cBQiSTMbWjLGK7+OjLECcYLvYICQcIOmbz/4k1RnE2nn7wuX8uXhq+umLvKEcpUquZBZNdXsYPmbkOU754IKXstPJdqdsndtbqcfvqmuP2lsbTLJ982/tfdpgAAtONOQ7z91e3Xb4r3P38xfVpcnJjhYrPXMqtpycSXxU86PwCwxo6OYQzxshwlXry8eGn+aPba3aYAALRjjyEaLk9ajhAblt8g2TCyI4bYKSMOzmVSzS7ZN0I8KcoRIjFEABgD+0aIZ9PpSdPry7WrzAAA6ZPmuBUAoAf6NsRBBP2IIebMiINzmVSzSzqqFfcJQL+gQJCAIcIoQIEgAUOEUYACQUK3hvi/CWhVTWKILdINGq/A/0fEXXnISwuekBhiN2RiiADtCGGIMHwwRBgFGCJIwBBhFGCIICETQ0w7+kYMMX2IIbZJSQwxDowQoV8YIcJOMEQYExgi7ARDhDGBIcJOMjHEtKNvxBCzoZUhDi44l0k1uyQTQwQIAiNE2AmGCGMCQ4SdYIgwJjBE2Ekmhph29I0YYja0MsTBBecyqWaXZDIxG6Ad3KkCEjBEGAUYIkjAEGEUYIggIRNDTDv6RgwxfbiXuU1KYoihi2GECL3CCBEkYIgwCjBEkIAhwijAEEFCJoaYdvSNGGL6EENsk5IYYhwYIUK/MEKEnWCIMCYwRNgJhghjAkOEnWRiiGlH34ghZkMrQxxccC6TanZJJoYIEARGiLATDBHGwcT+yAxxskjPTx8/PYIhwphghAg7ycQQ046+EUPMhlaGOLjgXCbV7JKOasWdKtAv3KkCEjBEGAUYIkjAEGEUYIggIRNDTDv6RgwxfbiXuU1KYoihi3EX1GWG2PdF/7H8jApGiCAhkxEiQDswRJCAIcIowBBBQiaGmHb0jRhi+hBDbJOSGGIcGCFCvzBChJ1giDAmMETYCYYIYwJDhJ1kYohpR9+IIWZDK0McXHAuk2p2SSaGCBAERoiwEwwRxgSGCDvBEGFMYIiwk0wMMe3oGzHEbGhliIMLzmVSzS7JZGI2QDu4UwUkYIgwCjBEkIAhwijAEEFCJoaYdvSNGGL6cC9zm5TEEEMXwwgReoURIkjAEGEUYIggAUOEUYAhgoRMDDHt6BsxxPQhhtgmJTHEODBChH5hhAg7wRBhTGCIsBMMEcYEhgg7ycQQ046+EUPMhlaGOLjgXCbV7JJMDBEgCIwQYScYIowJDBF2giHCmMAQYSeZGGLa0TdiiNnQyhAHF5zLpJpdksnEbIB2cKcKSMAQYRRgiCABQ4RRgCGChEwMMe3oGzHE9OFe5jYpiSGGLoYRIvQKI0SQgCHCKMAQQQKGCKMAQwQJmRhi2tE3Yogxef/Fm6I4m37yuumrhRhim5TEEOPACBG0XE4/fVNcPvm28b+V3Bghwk4wREia21/dfv2muDgxA8Vmr2Um0xKj9InQEF1afvr66REMERLHGuJL81+z15XMGCHCTjIxxLSjb8QQYxJghLiklSEOLjiXSTW7JBNDhPFiDJEYInQDhgiJY896W19l9mCIsJMdhth6usOmHDFE6BcMEXZytyG2nu6w5YSlsSGmHX0jhpgNrQxxcMG5TKrZJXfWqv10hy2THmSG2PdF/7H8jAruVAEJKx3j6rvHxXwyuXds/2o73aE+6YFb90DOqg7DgCGChLoh3jw7Kq4/KrX44Nz8GWyEWGCIoGBNh2HAEEFC3RBnk4r7r4r20x3qMUTuZc6g2FRY02EYuJe5TcpxxhBvnh8Xs8OiPkIMdZWZESKIWdNhGBghgoTVGOLDSanB06CxG18MhghiYugQQwQJHY1bMUToFwwRJGRiiGlH34ghpg8xxDYpxxlDjA8jROgXRoiwEwwRxgSGCDvBEGFMYIiwkzVDnIee/rVKY0NMO/pGDDE00XTYyhAHF5zLpJpdslqr68dHUUtjhAgS4umQESLsZM0QP441NnRgiCAhng4xRNjJ2rj19DBqaRgiiIimQwwRdrJ+ykwMsf/siCHG02ErQxxccC6TanZJJhOzAdrBnSogAUOEUYAhgoS6IV5//GWsUxUMEcRE0SGGCBIyGSGmHX0jhpg+3MvcJiUxxNDFMEKEXmGECBIwRBgFGCJIwBBhFGCIIGHbnSoR7hMghphBsekQQYfEENukHGcM0U+HnUxCPstiBUaIsJ+YOmSECDvhXmZID+5lhp5gPUQYExgi7GTNEGcPzmeTSbQ1wBobYtrRN2KIoYmmw1aGOLjgXCbV7JK1U+aPjst/Vx8kt7gDjIp4OmSECDvZiCGWx2YMEfolng4xRNjJ+inz5N7xPMFTZhgX0XSIIcJOMrmoknb0jRhiNrQyxMEF5zKpZpdwpwqMAu5UAQlrhnjzLM58WAwRNITXIYYIElYN8eaZeZbFLLwjYojJY5/8KYraWbeKF2guougQQ8yUjnXJvczpZddPsfP7r4qr7x6L0krTNYV7mRNL2WPhHeuSESI4jPDK9jc3Ej84n937vcnvPit/cX+Wx97vPDwqTicT9zS8UnhGKqcH8zJdqZbFB4FghAgVHeuSGCI4nPAOzG/3jmd21svVwyP/5/1X5e/lq3+CvDkSzx785vFR+dn148PlB6EghgiejnXJVWZw+COxOapapZWaunJH3/JPc0g+OjUhGnvENcK7/uizD16ZL50eLD9IF6vAidAQXVp++vqp07EuMzHEpKNvg4ohnj44n9eEt/jTHIkXQzYbqzn98KAoD9fmSBxtvbhwEENsk7L/GGJXulyrlbk7oByWqrMRwggxXfzVvPK/79izECc892d5Bvs7j82rP421wjNamd//fRfKCRxniaZDTplzo2Ndrhri9UdGg9zLDBtsBmPMoXse/om1trBoOsQQB0ZoXa5fZbbRSlbMhhWuHm4eamcmOhPJEOPpEEMcEhF0uXbKbFdvjyFyFy6VGeKWMOtEGI4VppsIw7vCdBNhuDh0upY/CRNNh60McVjBOU3KfqvZJd3WihFiuoyjIRgh5kbHjYMhgmMcDYEh5gaGCL0wjobAEHMDQ2xTTeYhNk6HIe7tc4MLzuVQzWEaIneqJM/AG4Jb9zKlX0O8eTZ58JuPwk+IxRCTJ6mGCK9DDDFTejXEm2eHV4/OI8z/whCTJ6WGiKBDDDFTejXE649flUJkPcR+s0smhmjmve669+nPFx/ZlOHWu4mgQ+5lbpMytRii0du2VRva63DbCLH39RAb+yY0Z5shPiqFMLtzuZDr7y8N8XvV/XZBiKBDRoiZsq1xjNTc3UxrtNfhZgwxgfUQMcQeuNsQZx/ef3U6mRwUV//kcfnqlt0s3/z9ycHpkdWge5nZNZpcssNTv0DngdHU/R8c6xbrZD1E8GxrHH+QXhdmCB0meZUZQ+yBbYboTplnB8Xc+OCRWW3h9Mj8Pjsq3yxHiKUAZ+ZAbYU4Pyz/u3l+XCYzt9yX6e2fpT7Lg7b7Vn+bhyFmylZDdEJaE2YRQocDM0RiiI3TbTPER3aMVirJSMjqrHyd2WU3jby+f37zB1/aQJ87Mh8VM7Nsp9HfH1iF2j+NUn9xPOt5EVliiG1SJhZDnBsh/X//Zk2YRQgdrl1UMffUR7qt3hDdEKExOw1xZYR46N80McTZD91Sxd+zV0LKN82RuRKi+9MfmTVmGE+HjBBzY1vjuBji4ZowixA6XLPpU/twKBxZ4QAAGfRJREFUn4NYC4BhiOmy0xCLtRjixIjs+vGDcx/B9lf3yv/u/eBoIUT35zJ2I7/+F02HGGJubG0cd5V5XZghdLgx7ca+fhl+4o0FQ0wXwR62JyRrbz3aa1nGOpV6iqdDDDE3JI2zRZibyHS4Me3GfPPBf90v80ZEN0RiiI3TNTJEyTL/5oqxMngYT4etDHFYwTlNysRiiOuIDFGmw/VamQHlQeBnSi6JbojQmLT2cCwdMkLMjY4bJ8nVbjDEHhjHHsYQcwNDxBAhGhgi7GTNEGdRZ90QQ0y62ISIpsNWhjis4Jwm5VifqeJmcs8OwhfDnSogJ4IOuVMFJGxMu3H/gheDIYKcCDrEEEHC2rSb58fuHsDgxWCIICeCDjFEkLB2Il9qcB7jllPuZc6g2IQIr0PuZW6TcqwxxHjFMEKEXmGECBLWDHEe6eoehggawusQQwQJG1eZIxWDIYKcCDrEEEHCtsUdYhRDDDH9YtMh3jwHuSG2ss5MgnOZVLNL1idmx13CM7ohwjCIpsOODBFyZWB3qsAwSOBOFQxxlHQUQ/QENkSMc6DE0yGGCDvpKIboScUQEw/mEUOMpsOODDGT4Fwm1eySrGOIjQ0REocYIvTD1odM5RJDxBAHSjwdYoiwk6zXQ8QQQQmGCDsZpyEmHswbfQwxHh0ZYibBuUyq2SUdTbuJMzG7sSFC4oTXYbcTsyFXsl4gFkMcKJs6PJtOP3ldvpYv6lcLhggSsl4gFkMcKBs6vP2lMbbLJ982+OdyiGiIcueUp4SeyHqB2MaGmHgwb/QxxA0dvv/5i+nT4uKkeP/FG+1r+fVpidkLE6HNmbSylOI8C3GehWux5j+Tlt/f8jMRp52EyLNH1orfWJizzanK5glLKoYIibOuw8tP3xQXLy9eFrdfv9G+uhwYIYKEPX7c5lRlywkLhgiNuTxpPEIsMESQsccQ25yqbDlhkTnYRGh04nT8pHZiouXypChHiMQQITarHePq4dpkhzanKltOWIQOJkxGDDFsunTY0KEJ3ZyECNoEtrkODVHeihFS9lp4p6zUan7PLDJy9fBoJUnTU5X6CYsnFUOEpNmuwyAEtjlGiEOjbog3z92iS1ePzqu32pyq1E9YPBgi7GeLDoMR2OYwxKFRN8Rq3ld9HmKbU5XaCYsHQ4T9bNNhKALbHIY4NPYZYlhSMcTEg3kjjyFiiNsghtgJ4zRESBkMEXpjxRDdKnSshwi9ElOHgW0OQxwa3Y5bMUTol8A2hyEOjXEaYuLBvJHHEGMS2OaIIXaRsks6qlViE7NhdGQ/MRs6YRSGKEwGAwZDBAkY4jIZDBgMESRgiMtkjfcOMcT0yd4QiSF2Aoa4TAYDJntDhE7AEJfJYMBgiCABQ1wmgwGDIYIEDHGZrPHeIYaYPtkbIjHEThjFxGxhMhg+gW2OEeLQwBCXyWD4BLY5DHFoYIjLZDB8Atschjg0MMRlsk2IIQ6NwDZHDLGLlF2CIS6TwfAJbHOMEIcGhrhMBsMnsM1hiEMDQ1wmg+ET2OYwxKGBIS6TbUIMcWgEtjliiF2k7BImZi+TwYDJfmI2dAKGuEwGAwZDBAkY4jIZDBgMESRgiMtkjfcOMcT0yd4QiSF2Aoa4TAYDJntDhE7AEJfJYMBgiCABQ1wmgwGTlyHKC4ewYIjLZI33DjHE9BmRIRJDbAETs5fJYPjInSZwSnnpusIhLBjiMhkMH7nTBE4pL11XOIQFQ1wmg+Ejd5rAKeWl6wqHsGCIy2SbEEMcGnKnCZxSXnqsam6BGOIGGOIyGQyfGE4jt6S+CmcsKQZDXCaD4RPDaeSW1FfhymqOGQxxmQyGT79O01fhGKIYDHGZbBNiiMNhYn9k/mHSSp1GmGchztPUU1j4RGGIsjyr/bT2M7nj/c2fiTDdzjx7hInZy2QwYIY6MTtwyu4bJjG6NMSJ0MEmQqMLmU58XBvQz6jAEMUJRw0jxGUyGDAYojjhqMEQl8ka7x1iiOmDIYoTbtt78v0cIWWXYIjLZDBgMERxwlGDIS6TwYDBEMUJRw2GuEwGAwZDFCccNRjiMlnjvUMMMX0wRHHCbXtPvp8jpOySbmsldLCARscIEer06zR9Fc4IUQyGuEwGw6dfp+mrcAxRDIa4TAbDp1+n6atwDFEMhrhMtgkxxKHRr9P0VTgxRDEY4jIZDJ9+naavwhkhisEQl8lg+PTrNH0VjiGKwRCXyWD49Os0fRWOIYrBEPXZbUAMMRv6dZq+CieGKIaJ2frsIEOYmC1OOGowxGjZQUpgiOKEowZDjJYdpASGKE44ajDEaNlt2QvSvRU0WaLBmo7BEMUJk4s2dgmGGC07SAkMUZxw1GNJDDFadpASGKI4IYbYQTEYIvQKhihOiCF2UAyGWBBD7BMMUZyQGGJnCC0noDP1aIjS7KBDAvsHhjg0MMTes4MOCewfGOLQwBB7zw46JLB/YIhDA0PsPbtNiCFGI7B/YIjrEEPUIPQIqZUETNdjdtAhgf0DQxwaGGLv2UGHBPYPDHFoYIi9ZwcdEtg/MMShgSH2nt0mxBCjEdg/MMR1iCHKihnhxGxpdtAFTMwWJ2SE2EExGOKd6aALMERxQgyxg2IwxDvTQRdgiOKEGGIHxWCIbbPbslOlO79xsw0IDFGckBhiB8VgiG2zg1ZgiOKEjBA7KAZD7Co72AqGKE4Yo5rZgCEOLTvYCoYoToghdlAMhthVdlt2fsyWzQUMUZywI0NMU5ZMzB5adrALeRcOnFJe+iCrmQ0Y4tCyg13Iu3DglPLSB1nNbIhpiGfTT16vviPs1NK+HzDd6LIbBZsKlHfhwCnlpQ+ymtkQ0RAvn3xb/lt5S9ipA/b94ThY4OzGwBYFyrtw4JTy0gdZzS2MLoZ4cVK8/+JN+cu0ZOLL4iedn8GDAjP96ZGIxV+8LG6/fhMvf4DdoEDQEtMQq+MzQC+gQNAS0RC3RHAaly+t5iCy66vYwSFSoGL3REjZa+G5VLNLYtaqdo1vkubWw7BBgaCkI5kgR+gXFAgSMEQYBSgQJPRtiIMI+hFDTJ+7DXHEwblMqtklfRsiQCegQJCAIcIoQIEgAUOEUYACQUJnhui56427Pt/3/WZ/T1p+f+3vSdv6xM1vsv3zYlTcraDJ2t/rnzf5O7QiVH9PBrE9PdFV+Xdt/nTP5/7PqXB3Tvd87v+eCptnKmu+qbC5p0I5CPOb7t8fE58dhnj3Hpru+Xz593S/YpSKkCqsWHaB/emn0u0RK0i+PdIeWP493f15T/Rd/nR/EkWyYWTXV7EjRb57IqTstfBcqtklGGJ62WGInTJip8mkml2CIaaXHYbYKSN2mkyq2SUYYnrZYYidMmKnyaSaXdK3IQIAJAOGCADgwRABADwYIgCAJxtDfNt3BfLl4mnfNUiaMe8eetU6uRjiuxcnIbO72L+yfAQCl3qx/tDhO5KNuMML6Hn3CBtRlaVYZoF7lY5++uA+ejbEi+l0Ktsvt19J2q7MT5RM1gnktZNlJ+x60mJ/+0efCzrThWiPjBbF7pHLQSEcWSNq0Di8rFcpN12YZZrH6X4N0e4U4ZFC0nZnZZKz/TvaFHu5Pzdp7YQbICxVsVO++cv9neniqVT0o0Sxe+TtopG1qBE1wympzBzCcYZ4g4Q9UFvN7ujVEP0uPnu5L509Pu1vu3c/s9ntS3bx6Zvi8snfhKqdtJfISpUWa6I/7372bl9nuv2VfBgwQhS7Ry0HQUphI9Yy3Z9OKDN5r9JskLAHaqrZMf2OEN1DIi/27r+yRd69mO4djLsjzrs/3iedy0//2hT8zR4dymp3+clrp5jdB8a30lJlxbozk29e7+tMNkqEI96FZvdIxaqQtbARpRorNDIT96pCsenSHijug53TcwzR7OnbX4raTpCba4j3f7ozbanCl5fl8ak4+5N/CFI7I+eyfrsPi6bnCUuVFXvx5K+mJ+/+rLjdk53t7TjiXWh2j1SsGlnLGlGmsUInM815uHSDRD1Q1Qe7pj9DdIfHy72t7NLJ2s5mtftAZpO8LVtjd7HS2hmsWvcdZ02n21uqtNjLMlW5Ry6mRlR7uOSiyi5ku0cuB3lKTSPKNFZIZabpVZqeIOqB4j7YC70ZYhV93SfIKt2e6QlVQKT8b+dZhQ1ynE1P9hQrrd3fWy2LgkBWqsKN3ZPu4qmJ5xg17x5auEDNPzI83I5890jloEkpbUSNxgqZzMS9qlBskLQHivtgP/RliNLoq/Q6ifQymAlynJ3cfrU7Piyu3Yty7G//35lf6ItCT91BeL+aXaCGE+Y7kO4e8aUCRUpxIwo1VmiukkTYIMWVdVkf7Im+DFF8/UOUTnEZzOZ0+/XusxRxbLiU9Nm+A2IR+KKQGdi8+/ynsrCX5HRsvAh3j+JSgVg48kYUaqxQXCUJv0HyHijtgz3R2whRFn2VphNeEC6lYq/T7UsoK/VtmeSLN2fl0H+vXANeFDLd+D/+i//8D/tiTxd2YIEj3oFm90jFqkkpa0SNxgr5VZIIGyS9EC3ugz3RiyGaOK0k+ipMZ4IskstgLmpzti/IIa2dnbKxP9DtQkD7pSottpB1Yxe4djM2YAP57pG3i6IFC6EXCzVWyGUWZYOkPVDcB/ujD0O0cdp/tj/6KkzngiyCy9VPRVKV1s7Fr/eeTFQhoH2xImmx9qLf/s5UBa73JBsr8t0jl4M8pbQRC6HGCrnMomyQtAeK+2CP9GCIga+nVEGWfdeshFEbebzZD//3hrpFISBpsf6i396BTdKB6/4R754Y11PEjWgQaayQRxqjbJCsB+rC3z3RgyGGvZ4iDbK8FUZthLVbTNlwstmBLAQkLFYo0rdpB677RrF7IlxPETuNXGOFPNIYfoPkYU5pH+yTPkaIwisWonTSIMtiCn+Y2gmnbFiNiEJA0uspIpGajU05cN0zmt0T5XqK1JOk04LkMhP2qmJZwb0p5WFOcR/sk75iiJIrFqJ4rjTI4qfwh6mdQZBZ2ev+1xtR7STFmviLUKRmYxMOXPeNZvfIr5KIUioasZBeBJfLTNyrXL6ylNIeqOiDPdKHIUpms5udJ0rn1C0IstjWEERtZKUWArVWZzqiyVl7i3XrxylECnei2D1iOYhSqhqxkDmiRmbiXuUSy1JKe6C8D/ZIt4aoWSRXcGPPYmr+niDLhZXV3hC6dgnffU3rTo3O9tZOVKw/KdkvUuHGjhX57lEsQShNKW7EBQL7EMrMJ5bdui3fIFkPzEeWnRrixUth55feZCqdmu8OtHvWo5TWTow7j9gnFVmxioVMRRs7XqS7Ry4Hcco4i/XKZKa5dVvRExRLiOUhyy4N8eLpW+GqbuJ7cKUN59Ya2n3Dsbh2shLLQ7to8rmo2NtfK87zBBs7ZmS7Ry4HcUpVIwqRysymFfYqVU9QLCGWhSw7NEQXP9m/qps54gliJ27wv7c9ztzRqxTO7uaV1k7Mu89fl6dG//pf7plnrShWcoBwazXt29ixIt898nZRCie0I8pkJu5VhWKDhD1Q3gdToDtDtJMyX7zce4X+4sn/+Pz1/rZz9wDtnZq/OHDuiV5IayfEaMUu2PQfdm+GrFgvqP2dqVqrKf1QTS/Id49cDuKU4kZUIJWZuFcVig0S9kB5H0yCDkeIZlKmoD38zT17osnSe4C+KVUwFa2jKqqdEKcVyRJ2kmLFswk1d9mMENVNSGI5CFPGmBIql5mwV1mkGyS+C0/cB1Ogyxii6PgkW6tcfA/QhX18oiSUG3CCVKWV/UvYiYqVm7r4LoRRoto9cjnIUkZwBbnMhL3KI9ogzfpl4j6YAJ1eZd67p9+K1yrX3QO0J5T7VlY7Kbo7NvcXKxaUfMbvKNHtnsCOGN4VxDKT9ypNT9DehZf85RRHt/MQ94zYrWJl8w9PxHq9/fW+q2X25qP9tZMjvGt6qip2n6DsKgDiGb+jQ7979reLsgWLwK4gtCRpryoUPUHVAyV9MBl6fureKu5m+8u9F45tbFwwsrLN+j9/Ot2nwqBX/i6FKztVMel9yczeEAjKZqeY8TsyYuweYQsW8kZUIJWZuFe5tLKeIO2Bij6YCkkZon9K675xpI+N7z2M/faPhA/mCflkOtdLBG4ti0m7ORD7BZX+QnO9EmP3yPOUNqKucJHMDKJe5RH1BHEP1PTBREjHEM1l/guJYuSx8W/+cn9rBH4ynfRynjAAZLKTxJ0yWGiuT2LsHnme0kbUFC69aizuVZqeoLk6JemDKZGMIV48MYGJ/WsNP5U/8KQ8kgmmJAR9Mp28l4gCQE6jfyMoOP2F5nolxu6R5ilvRDHySRayXuWQ9QRxD1T0wYRIxRDdWYUkUiZbLMTdk/DNa5EjBusl0hUwTUxJeCnPaNSf9OxJiRXuIPTuEbdgoWlEIeKFVoW9qkIY+pYu16Pog+mQiCEupsXvub/OJhPFxi+e/NX05N2f7XwKeHVLUajOIl0B0+l0b0qz7qe7AfRPdj+P3i45giPeQYzdI2zBQt6ICsQLrQp7VaHoCYoeKOuDqZGGIQqXARGvFmJCw+UxfN8JaZVXsPk2shUwq5jSnmLdup9ldoKHZ5mtTXyhub6IsXuELVjIG1GFcKFV+eI64p6gWXRJ1AeTIwlDNGIR7GjxaiHuEpydnr/r2BTh5gHJCpjCmFK1ntPeh2cpHhE+QmLsHnlUUNqISkQLrQp7lUHaExTr9Qj7YHIkYYjv/89CvKMlS774S3D77joPe/OAcAXMt9KYUrXu596CpY8IHynBd4+4BQtFI4qRL7Sq6FWqniAdk4j6YHIkYYhuYkAoR1TOsQg0dngrWwHz/b96XchiStJ1PwvhI8JHS+DdI2/BQtOIQoQys2h6lUHaEyRjkmyngSVgiOWwOuztt6JLcH9vD7TBbh5YBLr33mHng9e7Rw2adT/ld6qOlMC7R9aChbYRRYhlpuhVgXuCI9tpYP0bog16XwaNgAkCzmbd85chbx7wYZ29qnr/hT3A74spSdf9dAQOUQ2NsLtH2IKFthFFSGUm71XBe4Ij10kPvRuiu2AX7Inqfk1kwSU48yTKoMfEsuB9q9C+rF72I1v3E7pF04JFlEYUyKzQ9argPUHcB1Okb0OsLti9+7Mg2VVrIu+fD1Ee589OLsMIQXjT0/t/f1YehqXhgayms44EXQsWgRtR8ZQoTa8K2RMM8j6YIj0b4tuw0/g1ayIHeliARXbTk40pTU+kAwzJ8rLQKcoWLAI3ovQuU2WvCtkTsl+2vV9DXMaIw0zj19x1HnRhadn5gR0vXLA+V7703IJCmSl7Vdgl1jNftr3nEaKfcx/keCK967x6TFjgxTr3SXXxQCDIlARaULgCorBXhe8JipUfEqXvGKJtuyBDduld54uncAecHVZIbnqSPhAI0iSJFpQF5mS9KnxPUKz8kCo9GqK76T7UatXSu84DP49eiua5U5AimbSgvFeF7wmqlR8Spc8RYtkaZhJUoPGh8Cal0M+jl5HvzH1wZNOC0l4VvicoVn5Il94M0cyPvxA950GC9K7zwM+jl5PtzH3wZNGC8l4VvicoVn5ImL4M0c2PD+eIBklrBH0evYZM56nCggxaUNOr4vSE7B2xtxGimx8fZjEMv7yl0BF7knUG/Ql2kkELanpV2M3R9MGU6c0QA86P113R6s8Rs5y5D0vSb0FVrwrZE7K9qrxOfxdVwgUvlAu9pi9rgIaoelXAnhBhseV+6MMQ3REs3Fz2sAu9AuRI6F6lYzB9sAdDdI+ZCL7oPWvow4iJ1KuUlci/D3ZviItp8QHvFAm9vCVAXsToVToG0ge7N8Twj5kowi9vCZAVMXqVjoH0wR5GiKEfMwEweuhVgejaEM3y51nf/A2QHPSqYHQ+Qnz3+f8V+DETAGOHXhWKTg3Rrkhk1k/iWSEAgaBXhaRLQ3QLyvW9ohzAkKBXBaVDQ6wWlEt9RTmAfKBXhaU7Q8xmQTmAbKBXBabDEWIWC8oBZAW9KixdGaKJ/GawfBJARtCrgtORIbrIL20HEA56VXi6McQq8svKWwChoFdFoBNDJPILEBp6VQy6MMS3RH4BAkOvikIHhvjuBZFfgLDQq+LQxQjRPHeGtgMICb0qCp3EEG3bEfkFCAi9KgaxDfHCHsNuv+K2IoBQ0KuiEdkQ3/pR/QCePgOQCPSqeMQ1xEXkdwBPnwFIA3pVRCKPEH2cYwhPnwFIBHpVPGLHEM3dlsQ6AEJCr4pGREM0kd/LJ//4FYEOgFDQq+ISc4R4+elfP/nWju8BIAz0qqhEPWVm3ihAaOhVMYkbQ6TtAEJDr4pI5IsqzKQHCA29Kh6dP5cZACBVMEQAAA+GCADgwRABADwYIgCAB0MEAPBgiAAAHgxxk6uHk5J7x9s++uBVUdw8M59PHpx3XjMYHYixWzDETazQdn+0IwlAQBBjt2CIm3iBXT06L26eH18/ntx/Vf7xh5PJkfu9SnJ6VL79m4//uT1+Lz4CCAhi7BYMcROvwVJ/Roenh8XsoDxzOSzmD85XDsrz8q3D68cPzuel+lwygLAgxm7BEDdxYZsH57NSVofXHx0X1x+/MqIrf1Y0eP3981+Ux+wje+h2yXquOQwOxNgtGOImC6E9+jt7kmJi2ts0ePP8J98/N+Irz1d8sj6rDUMEMXYLhrhJJbSb5589OvdH2m0aLGY/PCyMBs1BmQMyxAAxdguGuMniqt1scliYeIyP12xo8Oq75anJ4wPzuU/WX6VhmCDGbsEQN3Fhm8mR1Zi5YleefXgN3jyrXdgrbv7gVXlQ/kF1YY+TFAgOYuwWDLEFV98r7FkKQO8gxiBgiM2Z2YMxGoQEQIxhwBABADwYIgCAB0MEAPBgiAAAHgwRAMCDIQIAeDBEAAAPhggA4Pn/ASHxRdwVObOqAAAAAElFTkSuQmCC" alt="plot of chunk unnamed-chunk-22"/> </p>

<p>Looking at the above plot, we can deduce the following conclusions.</p>

<pre><code>
 FATALITIES       - Main cause of concern is TORNADO followed by EXCESSIVE HEAT and FLASH FLOOD.
 INJURIES         - Main cause of concern is TORNADO followed by TSTM WIND and FLOOD.
 PROPERTY DAMAGE  - Main cause of concern is FLOOD followed by HURRICANE/TYPHOON and TORNADO.
 CROP DAMAGE      - Main cause of concern is DROUGHT followed by FLOOD, RIVER FLOOD and ICE STORM.

</code></pre>

<p><br></p>

<h2>Conclusion</h2>

<p>We analyzed the Storm Database provided by the U.S. National Oceanic and Atmospheric Administration and gained some interesting insights as to which weather event types pose a major threat to both the population health as well as the economy in the U.S. From our findings, we can conclude that major attention should be paid to <code>TORNADO</code>, <code>FLOOD</code> and <code>DROUGHT</code> followed by some other event types which have been mentioned in the above section.</p>

</body>

</html>