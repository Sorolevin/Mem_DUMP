#include<stdio.h>
main(void){
		double a = 0,b = 0,c = 0,d = 0,e = 0;
			int in,ad = 0,bd = 0,cd = 0,dd = 0,ed = 0 ;
			puts("inter number product  ");
				while((in = getchar()) != EOF){
						switch(in){
										case'1':
												a += 2.98;
												ad++;
												break;
										case'2':
												b += 4.50;
												bd++;
												break;
										case'3':
												c += 9.98;
												cd++;
												break;
										case'4':
												d += 4.49;
												dd++;
												break;
										case'5':
												e += 6.87;
												ed++;
												break;
										case'\n':
                                        case'\t':
                                        case' ':
                                              break;
										default:
											printf("%s", "Incorrect letter grade entered");
											puts("Enter a new grade");
											break;
									}
				}
            printf( "%02s%8s%12s","numb","cash","counts");
			printf("\n1%11.2f\%12.d\n2%11.2f\%12.d\n3%11.2f\%12.d\n4%11.2f\%12.d\n5%11.2f\%12.d",a,ad,b,bd,c,cd,d,dd,e,ed);
            return 0;
			}
