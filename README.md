# array
source_code one is the copied code of lee215. I found his logic very facinating.
It is the solution of a problem from leetcode 

 Most Visited Sector in a Circular Track(1560)
 
 Here is the explanation:
 Same solution. Help give some explanation"

rounds[0] -> ... -> n  - first part
1 -> n       - middle part
1 -> n       - middle part
...
1 -> ... -> rounds[rounds.size() - 1]  - last part
Assume that our rounds size is large so that I can separate to third parts. Then rounds[0] is start, and rounds[rounds.size() - 1] is end.
Lets come to first theory start <= end, it should be composed of first part or three parts. But no matter which one, we don't need to care about middle part because occurance time is same. However, the section of [start, n] in first part and [1, end] in last part is overlapped with the section [start, end], this is the reason.
Lets come to next theory start > end, it must be composed of three parts! Again, we don't need to care about middle part,

           s - - - - - n
1 -------------------- n
1 -------------------- n
1 ----- e
so this is the case of second theory, we need to add [1, end] and [start, n] to result. Also don't forget to follow the order, good luck:)


inshorts:
answer=
if(start<=end):
range[start,end]
else
range[1.end] + range[start,n]
