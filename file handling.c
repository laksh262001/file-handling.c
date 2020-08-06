#include<stdio.h>
main()
{
	FILE *fp,*cp;
	char s1[100], rev[20],sf[20],tf[20],ch;
	int i,n,count;
	printf("Enter the name of file to copy\n");
	gets(sf);
	fp=fopen(sf,"w");
	printf("Enter the size of the word which you want to reverse\n");
	scanf("%d",&n);
	printf("Enter the word\n");
	scanf("%s",s1);
	count=n-1;
	for(i=count;i>=0;i--)
	rev[count-i]=s1[i];
	rev[n]='\0';
	printf("Input word=%s and reversed word=%s\n",s1,rev);
	if(fp==NULL)
	{
		exit(0);
	}
	printf("Enter the new file name\n");
	scanf("%s",tf);
	cp=fopen(tf,"w");
	if(cp==NULL)
	{
		fclose(fp);
		exit(0);
	}
	while((ch=fgetc(fp))!=EOF)
	fputc(ch,cp);
	printf("File copied successfully\n");
	fclose(fp);
	fclose(cp);
	return(0);

}
