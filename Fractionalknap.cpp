
#include<iostream>
using namespace std;
struct Item {
char id[5];
int weight;
int value;
float density;
};
void fractionalKnapsack(Item items[], int n, int W);
int main() {
int i, j,n;
//list items
cout<<"Enter The Number of Items: ";
cin>>n;
Item items[n];
for(i=0;i<n;i++)
{
cout<<"Enter ID: ";
cin>>items[i].id;
cout<<"Enter weight: ";
cin>>items[i].weight;
cout<<"Enter value: ";
cin>>items[i].value;
items[i].density = float(items[i].value) / (items[i].weight);
}

Item temp;
int W;
cout<<"Knapsack: "<<endl<<endl;
for(int i=0;i<n; i++)
cout<<"Items ID: "<<items[i].id<<" \tWeight:"<<items[i].weight<<" \tValue: "<<items[i].value<<endl;
cout<<"\n\nAfter calculating Unit Price "<<endl<<endl;
for(int i=0;i<n; i++)
cout<<"Items ID: "<<items[i].id<<" \tWeight:"<<items[i].weight<<" \tValue: "<<items[i].value<<"\tUnit Price: "<<items[i].density<<endl;

cout<<"\n\nEnter Knapsack Capacity :";
cin>>W;
cout<<endl<<endl;
//compute desity = (value/weight)

//sort by density in descending order
for(i = 1; i < n; i++) {
for(j = 0; j < n - i; j++) {
if(items[j+1].density > items[j].density) {
        temp = items[j+1];
items[j+1] = items[j];
items[j] = temp;
}
}
}
fractionalKnapsack(items, n, W);
return 0;
}
void fractionalKnapsack(Item items[], int n, int W) {
int i, wt;
float value;
float totalWeight = 0, totalBenefit = 0;
for(i = 0; i < n; i++) {
if(items[i].weight + totalWeight <= W) {
totalWeight += items[i].weight;
totalBenefit += items[i].value;
cout<<"Selected Item: "<<items[i].id<<" \tWeight:"<<items[i].weight<<" \tValue: "<<items[i].value<<"\tUnit Price: "<<items[i].density<<endl;
}
else {
wt = (W - totalWeight);
value = wt * (float(items[i].value) / items[i].weight);
totalWeight += wt;
totalBenefit += value;
cout<<"Selected Item: "<<items[i].id<<"\tWeight:"<<wt<<"\tValue: "<<value<<"\tUnit Price: "<<items[i].density<<endl;
break;
}
}
cout<<"\n\nTotal Weight: "<<totalWeight<<endl;
cout<<"Total Benefit: "<<totalBenefit<<endl;
}
