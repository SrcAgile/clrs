[TOC]

###chapter 10

> welcome to visit the answer of chapter 10,there may be something wrong in my answer, i am very appriciate about posting the issues in my git issue part.

####10.1-1
---
画图,略...

####10.1-2
---
创造stack1和stack2，用数组的中间部分作为公共的栈底

```c
//the following are pseudocode
int len;//suppose this is length of the array
PUSH(stack1,x){
    if(stack1.top+stack2.top<=len-1)
		stack1(++stack1.top) = x 
}
```

####10.1-3
---

drawing....

####10.1-4
---
**rewrite the ENQUEUE AND DEQUEUE CODE with the ability of resolveing overflow**

```c
char *ENQUEUE(Q,X){
    if(Q.tail<Q.length)
		Q[Q.tail++] = x
	else
		return "overflow";

}
```
