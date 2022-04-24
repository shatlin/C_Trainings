 int i;      //no error here because this is considered as a declaration
 main()
 {
 extern int i;
 extern int i;
 i=0;
 }
 int i=9;
 int i=0;  //error here because there can be any noof declarations like extern
				//but there must be only one definition like int i=9
				//but at the top it is not an error