void welcome()
{
                system("color 3");
                int i,y;
                locate(26,5);
                printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ");
                locate(27,7);
                  printf("*************************************");
                  locate(27,9);
                  
            locate(27,11);
                  printf(" %c%c%c!!! WELCOME !!!%c%c%c",2,2,2,2,2,2);
                  locate(39,13);
                  printf("TO");
                  locate(27,15);
                  printf(" %c%c%c%c Cricket score sheet %c%c%c%c",3,3,3,3,3,3,3,3);
                   locate(27,17);
                  printf("\And store all your data.......");
                  locate(27,19);
               
                  locate(27,21);
                  printf("******************************");
                  locate(27,23);
                  printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
                  Sleep(250);
                  
                  
                  locate(27,25);
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE );
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE );
                  

                  for(y=35;y<=58;y++)
                  {
                    {

                      locate(27,y);
                      Sleep(400);
                    }
                  }
                  printf("\n");

system("color ff");
            }



