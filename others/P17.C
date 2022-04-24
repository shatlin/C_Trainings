main(){
   char ch,s[20]="the indian";
   int i=0;
   clrscr();
    ch=s[++i];
     printf("\t%c %d\n",ch,i);
    ch=s[i++];
     printf("\t%c %d\n",ch,i);
    ch=i++[s];
     printf("\t%c %d\n",ch,i);
	 ch=++i[s];   //[] has higher priority than ++
     printf("\t%c %d\n",ch,i);
}
