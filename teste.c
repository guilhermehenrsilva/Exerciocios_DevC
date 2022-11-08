#include <stdio.h>
int main (){
int i, v[100], n, contPositivo=0;
printf("Qtde de valores no vetor:");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&v[i]);

for(i=0;i<n;i++)
if(v[i]>0)
contPositivo++;
return 0;
}
