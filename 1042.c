#include <stdio.h>
    main(){
    int a,b,c,d,e,f,g;
    scanf("%d %d %d",&a,&b,&c);
    d=a;
    e=b;
    f=c;
    if(f>d){g=d;d=f;f=g;}
	if(e>d){g=d,d=e,e=g;}
	if(f>e){g=e,e=f,f=g;}
	printf("%d\n%d\n%d\n\n",f,e,d);
	printf("%d\n%d\n%d\n",a,b,c);
	system("pause");}
