#include <stdio.h>
#include<math.h>
int circle()
    {float a,areac;
        printf("enter the radius of circle \n");
    scanf("%f",&a);
    areac=3.142*a*a;
    printf("area of circle is %f units",areac);
    
    }
int triangle()
    {
      float h,b,areat;
      printf("\nenter the heigth and base of Triangle\n");
      scanf("%f %f",&h,&b);
      areat=0.5*h*b;
     
      printf("Arae of Triangle is %f units",areat);
    }
int show()
{int ch;
    printf("\n***Enter the below choise to find following task***\n   #Enter key 1 to find area \n   #Enter key 2 to find volume  \n   ");
scanf("  %d",&ch);
return ch;
}
int square()
{
    float l,areas;
      printf("\nenter the side of square\n");
      scanf("%f",&l);
      areas=l*l;
     
      printf("Arae of square is %f units",areas);
}
int rectangle()
{
    float j,k,arear;
      printf("\nenter the length and bredth of rectangle\n");
      scanf("%f %f",&j,&k);
      arear=j*k;
     
      printf("Arae of rectangle is %f units",arear);
      
}
int trapezium()
{    float d,e,f,areatr;
      printf("\nenter the base1  and base2 and vertical height of trapezium\n");
      scanf("%f %f %f",&d,&e,&f);
      areatr=0.5*(d+e)*f;
     
      printf("Arae of trapezium is %f units",areatr);
      
    
}

int ellipse()
{    float B,C,areael;
      printf("\nenter  radius of major axis and radius of minor axis\n");
      scanf("%f %f",&B,&C);
      areael=3.142*B*C;
     
      printf("Arae of ellipse is %f units",areael);
      
    
}
int sector()
{    float D,E,areas;
      printf("\nenter  radius of circle and angle of sector\n");
      scanf("%f %f",&D,&E);
      areas=(E/360)*3.142*D*D;
     
      printf("Arae of sector is %f units",areas);
      
    }
int rhombus()
{    float F,G,arearh;
      printf("\nenter  base and height rhombus\n");
      scanf("%f %f",&F,&G);
      arearh=F*G;
     
      printf("Arae of rhombus is %f units",arearh);
      
    
}
int parallelogram()
{   int J ;
    float H,I,areapa;
      printf("\nenter  two adjacent sides  and angle between them \n");
      scanf("%f %f %d",&H,&I,&J);
      areapa=H*I*sin(J);
     
      printf("Arae of parallelogram is %f units",areapa);
      
      
    
}
int cuboid()
{    
    float M,K,L,areacu;
      printf("\nenter  length bredth and height of cuboid \n");
      scanf("%f %f %f",&K,&L,&M);
      areacu=K*L*M;
     
      printf("Arae of cuboid is %f units",areacu);
      
      
    
}
int cube()
{    
    float N,areacub;
      printf("\nenter side of cube \n");
      scanf("%f",&N);
      areacub=N*N*N;
     
      printf("Arae of cube is %f units",areacub);
      
      
    
}
int cylinder()
{    
    float O,P,areacyl;
      printf("\nenter radius and height of cylinder \n");
      scanf("%f %f",&O,&P);
      areacyl=3.142*O*O*P;
     
      printf("Arae of cylinder is %f units",areacyl);
      
      
    
}
int sphere()
{    
    float Q,areasph;
      printf("\nenter radius of sphere \n");
      scanf("%f",&Q);
      areasph=3.142*1.33*Q*Q*Q;
     
      printf("Arae of sphere is %f units",areasph);
      
      
    
}
int hemisphere()
{    
    float R,areahsph;
      printf("\nenter radius of hemisphere \n");
      scanf("%f",&R);
      areahsph=3.142*0.66*R*R*R;
     
      printf("Arae of hemisphere is %f units",areahsph);
      
      
    
}
int cone()
{    
    float S,T,areacon;
      printf("\nenter radius and height of cone  \n");
      scanf("%f %f",&S,&T);
      areacon=3.142*0.333*S*S*T;
     
      printf("Arae of cone is %f units",areacon);
      
      
    
}
int main()
{

for(int i=0;i<100;i++)
{
    int r=show();
switch (r)
{case 1:printf("enter what type of area to find\nkey 1 for circle\nkey 2 for triangle\nkey 3 for square\nkey 4 for rectangle\nkey 5 for trapezium\nkey 6 for ellipse\nkey 7 for sector\nkey 8 for rhombus\nkey 9 for parallelogram\n");
        int c;
        scanf("%d",&c);
        switch(c)
        {
            case 1: circle();
            break;
            case 2: triangle();
            break;
            case 3: square();
            break;
            case 4: rectangle();
            break;
            case 5: trapezium();
            break;
            case 6:ellipse();
            break;
            case 7:sector();
            break;
            case 8:rhombus();
            break;
            case 9:parallelogram();
            break;
            default:printf("Enter valid key");
        }
    break;
  case 2:printf("enter what type of volume to find\nkey 1 for cuboid \nkey 2 for cube\nkey 3 for cylinder\nkey 4 for sphere\nkey 5 for Hemisphere\nkey 6 for cone\n");
        int A;
        scanf("%d",&A);
        switch(A)
        {
            case 1: cuboid();
            break;
            case 2: cube();
            break;   
            case 3: cylinder();
            break;
            case 4: sphere();
            break;
            case 5: hemisphere();
            break;
            case 6: cone();
            break;
            default:printf("Enter valid key");
        
        
        }
    break;
 default:printf("enter valid key");       
    


}
}
    return 0;

}



