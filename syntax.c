#include <stdio.h>
#include <stdlib.h>
    next(){
        if(start->tokens[1]=='/'){
                start=start->next;
              if (value==0)
                printf(divide on 0);
                    endf();  }

        else   start=start->next;

    }
  void   endf(){
  while(start->tokens[1]!=';'||strcmp("keyword",start->tokens[0])==0){
    next();
  }
  mainf();

  }
 void mainf(){
   if(start->tokens[1]=='(') next()
     else{printf("line is%d i read %s corect is(\n",start->tokens[2],start->tokens[1]);
                      next();}
        if(start->tokens[1]==')')
           next();
            else{printf("line is%d i read %s corect is)\n",start->tokens[2],start->tokens[1]);
                   next();}
                   if(start->token0s[1]=='{')
                           next();
                             else{printf("line is%d i read %s corect is {",start->tokens[2],start->tokens[1]);
                                      next();}
                             mainf();

 }
 void elsef(){
               if(token()=='{'){next();}
                        else {printf("line is%d i read %s corect is{\n",start->tokens[2],start->tokens[1]);
                          next();}
                               mainf();
                            if (token=='}')next();
                              else{printf("line is%d i read %s corect }is)\n",start->tokens[2],start->tokens[1]);
                                  next();}
}
 void iff(){
   if(start->tokens[1]=='(')
        next();
     else{printf("line is%d i read %s corect is(\n",start->tokens[2],start->tokens[1]);
         next();}
       if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
           next();
        else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                next();}
         if(start->tokens[1]=='=='||start->tokens[1]=='>'||start->tokens[1]=='<'||start->tokens[1]=='!='||start->tokens[1]=='>='||start->tokens[1]=='<=')
                     next();
           else {printf("line is%d i read %s corect is ==,<,>,!=,>=,<=\n",start->tokens[2],start->tokens[1]);}
             if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
               next();
                else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                 if(start->tokens[1]=='||'||start->tokens[1]=='&&'){goto *26;}
                    if(token()==')') next();
                     else{printf("line is%d i read %s corect is)\n",start->tokens[2],start->tokens[1]);
                         next();}
                       if(token()=='{'){next();}
                        else {printf("line is%d i read %s corect is{\n",start->tokens[2],start->tokens[1]);
                          next();}
                               mainf();
                            if (token=='}')next();
                              else{printf("line is%d i read %s corect }is)\n",start->tokens[2],start->tokens[1]);
                                  next();}
}
 void whilef(){
   if(start->tokens[1]=='(')
        next();
     else{printf("line is%d i read %s corect is(\n",start->tokens[2],start->tokens[1]);
         next();}
       if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
           next();
        else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                next();}
         if(start->tokens[1]=='=='||start->tokens[1]=='>'||start->tokens[1]=='<'||start->tokens[1]=='!='||start->tokens[1]=='>='||start->tokens[1]=='<=')
                     next();
           else {printf("line is%d i read %s corect is ==,<,>,!=,>=,<=\n",start->tokens[2],start->tokens[1]);}
             if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
               next();
                else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                 if(start->tokens[1]=='||'||start->tokens[1]=='&&'){goto *26;}
                    if(token()==')') next();
                     else{printf("line is%d i read %s corect is)\n",start->tokens[2],start->tokens[1]);
                         next();}
                       if(token()=='{'){next();}
                        else {printf("line is%d i read %s corect is{\n",start->tokens[2],start->tokens[1]);
                          next();}
                               mainf();
                            if (token=='}')next();
                              else{printf("line is%d i read %s corect }is)\n",start->tokens[2],start->tokens[1]);
                                  next();}
}
void intf(){


           if(strcmp("id",start->tokens[0])==0)
               next();
                else{printf("line is%d i read %s corect is id \n",start->tokens[2],start->tokens[1]);}
                 if (searchf(id)==1){printf(already difid); endf();}
                       else{
                  if(strcmp("max",start->tokens[1])==0||strcmp("min",start->tokens[1])==0||start->tokens[1]=='='||start->tokens[1]==';')
                    else {printf("line is%d i read %s corect is max min = ; \n",start->tokens[2],start->tokens[1]);
                      end();}
                     //max or min
                      if(strcmp("max",start->tokens[1])==0||strcmp("min",start->tokens[1])==0)
                              if(start->tokens[1]=='(')
                                     next();
                                        else{printf("line is%d i read %s corect is(\n",start->tokens[2],start->tokens[1]);next();}
                                              next();}
                                                if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
                                                      next();
                                                         else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                                                              if(start->tokens[1]==',')
                                                                   next();
                                                                  else{printf("line is%d i read %s corect is ,\n",start->tokens[2],start->tokens[1]);
                                                                         next();}
                                                                           if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
                                                                                next();
                                                                                else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                                                                                    if(token()==')') next();
                                                                                        else{printf("line is%d i read %s corect is)\n",start->tokens[2],start->tokens[1]);
                                                                                             next();}
                                                                                              if(token()==';') next();
                                                                                                 else{printf("line is%d i read %s corect is;\n",start->tokens[2],start->tokens[1]);
                                                                                                 next();}

                     //end of max or min
                     //;
                  if(token()==';')
                    next();
                     else{printf("line is%d i read %s corect is;\n",start->tokens[2],start->tokens[1]);
                         next();}

                                     // end ;
                                     //=

                  if(token()=='='){next();}
                        else {printf("line is%d i read %s corect is=\n",start->tokens[2],start->tokens[1]);
                          next();}
                           if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
                                  next();
                                 else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                                  next();}
                                 if(start->tokens[1]==';'||start->tokens[1]=='+'||start->tokens[1]=='/'||start->tokens[1]=='*'||start->tokens[1]=='-')
                                    else {printf("line is%d i read %s corect is; + - / *\n",start->tokens[2],start->tokens[1]);
                                      if(start->tokens[1]==';') next();
                                            mainf();
                                            if(start->tokens[1]=='+'||start->tokens[1]=='/'||start->tokens[1]=='*'||start->tokens[1]=='-')
                                                next();
                                                if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
                                                    next();
                                                      else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                                                        next();}
                                                           if(token()==';')
                                                                 next();
                                                                  else{printf("line is%d i read %s corect is;\n",start->tokens[2],start->tokens[1]);
                                                                      next();}
                                                                          maimf();}


}
 void floatf(){
          if(strcmp("id",start->tokens[0])==0)
               next();
                else{printf("line is%d i read %s corect is id \n",start->tokens[2],start->tokens[1]);}
                 if (searchf(id)==1){printf(already difid); endf();}
                else{
                  if(strcmp("max",start->tokens[1])==0||strcmp("min",start->tokens[1])==0||start->tokens[1]=='='||start->tokens[1]==';')
                    else {printf("line is%d i read %s corect is max min = ; \n",start->tokens[2],start->tokens[1]);
                     endf();}
                     //max or min
                      if(strcmp("max",start->tokens[1])==0||strcmp("min",start->tokens[1])==0)
                              if(start->tokens[1]=='(')
                                     next();
                                        else{printf("line is%d i read %s corect is(\n",start->tokens[2],start->tokens[1]);
                                              next();}
                                                if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
                                                      next();
                                                         else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                                                              if(start->tokens[1]==',')
                                                                   next();
                                                                  else{printf("line is%d i read %s corect is ,\n",start->tokens[2],start->tokens[1]);
                                                                         next();}
                                                                           if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
                                                                                next();
                                                                                else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                                                                                    if(token()==')') next();
                                                                                        else{printf("line is%d i read %s corect is)\n",start->tokens[2],start->tokens[1]);
                                                                                             next();}
                                                                                              if(token()==';') next();
                                                                                                 else{printf("line is%d i read %s corect is;\n",start->tokens[2],start->tokens[1]);
                                                                                                 next();}

                     //end of max or min
                     //;
                  if(token()==';')
                    next();
                     else{printf("line is%d i read %s corect is;\n",start->tokens[2],start->tokens[1]);
                         next();}

                                     // end ;
                                     //=

                  if(token()=='='){next();}
                        else {printf("line is%d i read %s corect is=\n",start->tokens[2],start->tokens[1]);
                          next();}
                           if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
                                  next();
                                 else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                                  next();}
                                 if(start->tokens[1]==';'||start->tokens[1]=='+'||start->tokens[1]=='/'||start->tokens[1]=='*'||start->tokens[1]=='-')
                                    else {printf("line is%d i read %s corect is; + - / *\n",start->tokens[2],start->tokens[1]);}
                                      if(start->tokens[1]==';') next();
                                            mainf();
                                            if(start->tokens[1]=='+'||start->tokens[1]=='/'||start->tokens[1]=='*'||start->tokens[1]=='-')
                                                next();
                                                if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
                                                    next();
                                                      else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                                                        next();}
                                                           if(token()==';')
                                                                 next();
                                                                  else{printf("line is%d i read %s corect is;\n",start->tokens[2],start->tokens[1]);
                                                                      next();}
                                                                          maimf();}


}

void  boolf(){

    if(strcmp("id",start->tokens[0])==0)
               next();
                else{printf("line is%d i read %s corect is id \n",start->tokens[2],start->tokens[1]);
                next();}
                 if (searchf(id)==1){printf(already difid); endf();}
                   else{
                 if(token()==';')
                    {next();
                           mainf();}
                   else{printf("line is%d i read %s corect is;\n",start->tokens[2],start->tokens[1]);
                            next();
                             mainf();  }
                             if(token()=='='){next();}
                                else {printf("line is%d i read %s corect is=\n",start->tokens[2],start->tokens[1]);
                                    next();}
                                     if(strcmp("true",start->tokens[1])==0||strcmp("false",start->tokens[1])==0)
                                                    next();
                                                      else{printf("line is%d i read %s corect is true or false\n",start->tokens[2],start->tokens[1]);
                                                        next();}
                                                    if(token()==';')
                                                           {next();
                                                                  mainf();}
                                                             else{printf("line is%d i read %s corect is;\n",start->tokens[2],start->tokens[1]);
                                                                     next();
                                                                      mainf();  }}
}

void idf(){      if (searchf(id)==0){printf(nodifid); endf();}
            else{
                  if(token()=='='){next();}
                        else {printf("line is%d i read %s corect is=\n",start->tokens[2],start->tokens[1]);
                          next();}
                           if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
                                  next();
                                 else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                                  next();}
                                 if(start->tokens[1]==';'||start->tokens[1]=='+'||start->tokens[1]=='/'||start->tokens[1]=='*'||start->tokens[1]=='-')
                                    else {printf("line is%d i read %s corect is; + - / *\n",start->tokens[2],start->tokens[1]);}
                                      if(start->tokens[1]==';') next();
                                            mainf();
                                            if(start->tokens[1]=='+'||start->tokens[1]=='/'||start->tokens[1]=='*'||start->tokens[1]=='-')
                                                next();
                                                if(strcmp("id",start->tokens[0])==0||strcmp("number",start->tokens[0])==0)
                                                    next();
                                                      else{printf("line is%d i read %s corect is id or number\n",start->tokens[2],start->tokens[1]);
                                                        next();}
                                                           if(token()==';')
                                                                 next();
                                                                  else{printf("line is%d i read %s corect is;\n",start->tokens[2],start->tokens[1]);
                                                                      next();}
                                                                          maimf();}


}
void  charf(){
    if(strcmp("id",start->tokens[0])==0)
               next();
                else{printf("line is%d i read %s corect is id \n",start->tokens[2],start->tokens[1]);}
                 if (searchf(id)==1){printf(already difid); endf();}
  else{
                    if(token()=='='){next();}
                        else {printf("line is%d i read %s corect is=\n",start->tokens[2],start->tokens[1]);
                          next();}
                              if(token()=='\''){next();}
                        else {printf("line is%d i read %s corect is'\n",start->tokens[2],start->tokens[1]);
                          next();}
                           if(token()=='\''){next();}
                        else {printf("line is%d i read %s corect is'\n",start->tokens[2],start->tokens[1]);
                          next();}
                           if(token()==';')
                             next();
                                 else{printf("line is%d i read %s corect is;\n",start->tokens[2],start->tokens[1]);
                                 next();}}
}
void mainf(){
   switch(start->tokens[1])
   case'main':  mainf();break;
   case'if':    iff();break;
   case'else':  elsef();break;
   case'while': whilef();break;
   case'int':   intf();break;
   case'bool':  boolf();break;
   case'float': floatf();break;
   case'char': charf();break;
   default:
       {if(strcmp("id",start->tokens[0])==0){idf();}
    }
 }
int main()
{
    while(!getToken(type,attr)){
        mainf();
    }
    return 0;
}