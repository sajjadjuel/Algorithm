#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

#define MAX 100

#define initial 1
#define waiting 2
#define visited 3

int n;
int adj[MAX][MAX];
int state[MAX];
void create_graph();
void DF_Traversal();
void DFS(int v);

//int queue[MAX], front = -1,rear = -1;
int stack[MAX], top = -1;
//void push(int vertex);
//int pop();
//int isEmpty();
bool isEmpty()
{
    if (top==-1)
        return true;
    else
        return false;
}
bool isFull()
{
    if (top>=MAX-1)
        return true;
    else
        return false;
}
void push(int a) {
   if(isFull())
      cout<<"\n Stack Overflow\n"<<endl;
   else {
      top++;
      stack[top] = a;
      //cout<<"The pushed element is : "<<stack[top]<<endl<<endl;
   }
}
int pop() {
    int delete_item;
   if(isEmpty())
      cout<<"\nStack Underflow\n"<<endl;
   else {
     // cout<<"The popped element is "<< stack[top] <<endl;
     delete_item = stack[top];
      top--;
return delete_item;

   }
}

int main()
{
create_graph();
DF_Traversal();
return 0;
}

void DF_Traversal()
{
int v;

 for(v=0; v<n; v++)
state[v] = initial;

 printf("Enter Start Vertex for DFS: \n");
scanf("%d", &v);
DFS(v);
}

void DFS(int v)
{
int i;

 push(v);
state[v] = waiting;

 while(!isEmpty())
{
v = pop( );
printf("%d ",v);
state[v] = visited;

 for(i=0; i<n; i++)
{
if(adj[v][i] == 1 && state[i] == initial)
{
push(i);
state[i] = waiting;
}
}
}
printf("\n");
}


void create_graph()
{
int count,max_edge,origin,destin;

 printf("Enter number of vertices : ");
scanf("%d",&n);
max_edge = n*(n-1);

 for(count=1; count<=max_edge; count++)
{
printf("Enter edge %d( -1 -1 to quit ) : ",count);
scanf("%d %d",&origin,&destin);

 if((origin == -1) && (destin == -1))
break;

 if(origin>=n || destin>=n || origin<0 || destin<0)
{
printf("Invalid edge!\n");
count--;
}
else
{
adj[origin][destin] = 1;
}
}
}
