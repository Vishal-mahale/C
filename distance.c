#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x1,x2,y1,y2,choice;
    float dist,slope;
    printf("Enter co-ordinates of first point\n");
    scanf("%d %d",&x1,&y1);
    printf("Enter co-ordinates of second point\n");
    scanf("%d %d",&x2,&y2);
    do{ 
        printf("\n1.Distance btw points  2.Slope of line  3.To check quadrant  4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
            printf("The distance between points is %f\n",dist);
            break;

            case 2:slope=(y2-y1)/(x2-x1);
            printf("slope of line is %f\n",slope);
            break;

            case 3: 
            if((x1>0 && x2> 0&& y1>0 && y2>0)||(x1<0 && x2<0 && y1<0 && y2<0)||(x1>0 && x2<0 && y1>0 && y2<0)||(x1<0 && x2>0 && y1<0 && y2>0))
            {
                printf("Both points lies in the same quadrant");
            }   
            else
            {                        
                printf("points do not lie in the same quadrant\n");
            }
            break;
            
            case 4:exit(0);
            default:printf("Invallid choice\n");
        }
    }while(choice!=4);
    return 0;      
}