#include <stdio.h>
int main(void) {
	int n,i,j,a[10],b,temp;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
  {
    if(a[i]>a[i+1])
    {
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
  }
  for(i=0;i<n;i++)
  {
    if(a[i]<n)
    {
      printf("%d\t",a[i]);
    }
  }

	return 0;
}
