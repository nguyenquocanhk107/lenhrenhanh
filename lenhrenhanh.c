#include <stdio.h>
 int main()
 {
 	int username,password,cn,sodu,dola,stk;
 	sodu=1000;
 	
 	printf("dang nhap\nusername: ");
 	scanf("%d",&username);
 	printf("password: ");
 	scanf("%d",&password);
 	if (username==1072002&&password==12345)
 	{
	   printf("dang nhap thanh cong\nWecome to techcombank\nNGUYEN QUOC ANH \nxin moi chon loai giao dich \n1.rut tien \n2.chuyen khoan \n3.so du \n4.ket thuc giao dich\n nhap vao : ");
 	 scanf("%d",&cn);
 	 switch(cn)
 	 {
 		case 1:
 			printf("nhap so tien muon rut: ");
 			scanf("%d",dola);
 			
 			if(dola<=sodu)
 			 printf("rut tien thanh cong ");
 			else
 			 printf("so du tai khoan khong du ");
 		break;
 		case 2: 
 		    printf("chuyen khoan den stk");
 		    scanf("%d",&stk);
 		    printf("nhap so tien muon chuyen ");
 			scanf("%d",dola);
 			if(dola<=sodu)
 			 printf("chuyen tien thanh cong ");
 			else
 			 printf("so du tai khoan khong du ");
 		break;
 		case 3:
 			printf("so du cua ban la: %d$",sodu);
 		break;
 		case 4:
 			printf("cam on da su dung dich vu cua techcombank!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
 		break;	
 	 };
	}
 	 
 	else 
	 printf("dang nhap that bai ") ;
	
	
	
	return 0; 
 	
 }
