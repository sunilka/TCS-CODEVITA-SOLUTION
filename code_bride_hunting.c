#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>

int main()
{
    int i,j;
    int **a;
    int row,col;
    int cal=0;

    int samx=0;
    int samy=0;
    int maxx=0;
    int maxy=0;
    float distance=0;
    float newdistance=0;
    int noofneighbours=0;
    int maxneighbours=0;


    scanf("%d%d",&row,&col);

    a=(int*)malloc(row*sizeof(int));

    for(i=0;i<row;i++)
    {
        a[i]=(int*)malloc(col*sizeof(int));
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<row;i++)
    {
        noofneighbours=0;
        for(j=0;j<col;j++)
        {
            noofneighbours=0;
            if(i==0 && j==0)
            {
            }

            else
            {
                if( (i==0 && j!=0 && j!=col-1) && a[i][j]==1 ) // for the first row
                {
                    if(a[i][j-1]==1)
                        noofneighbours++;
                    if(a[i][j+1]==1)
                        noofneighbours++;
                    if(a[i+1][j+1]==1)
                        noofneighbours++;
                    if(a[i+1][j-1]==1)
                        noofneighbours++;
                    if(a[i+1][j]==1)
                        noofneighbours++;

                    if( noofneighbours > maxneighbours)
                    {
                        maxneighbours=noofneighbours;
                        maxx=i;
                        maxy=j;
                        cal=(((maxx-samx)*(maxx-samx)) +  ((maxy-samy)*(maxy-samy)));
                        distance=sqrt(cal);
                    }

                    else if( noofneighbours == maxneighbours )
                    {
                        cal=( ( (maxx-samx)*(maxx-samx)) +  ((maxy-samy)*(maxy-samy)));
                        newdistance=sqrt(cal);

                        if( newdistance < distance )
                        {
                            maxx=i;
                            maxy=j;
                        }
                    }
                }

                else if( (i==row-1) && (a[i][j]==1)  ) //for the last row
                {
                    if(a[i][j-1]==1)
                        noofneighbours++;
                    if(a[i][j+1]==1)
                        noofneighbours++;
                    if(a[i-1][j-1]==1)
                        noofneighbours++;
                    if(a[i-1][j+1]==1)
                        noofneighbours++;
                    if(a[i-1][j]==1)
                        noofneighbours++;

                    if( noofneighbours > maxneighbours)
                    {
                        maxneighbours=noofneighbours;
                        maxx=i;
                        maxy=j;
                        cal=(((maxx-samx)*(maxx-samx)) +  ((maxy-samy)*(maxy-samy)));
                        distance=sqrt(cal);
                    }

                    else if( noofneighbours == maxneighbours )
                    {
                        cal=( ( (maxx-samx)*(maxx-samx)) +  ((maxy-samy)*(maxy-samy)));
                        newdistance=sqrt(cal);

                        if( newdistance < distance )
                        {
                            maxx=i;
                            maxy=j;
                        }
                    }

                }

                else if( (j==0) && (a[i][j]==1) ) //for the first row
                {

                    if(a[i][j+1]==1)
                        noofneighbours++;
                    if(a[i+1][j]==1)
                        noofneighbours++;
                    if(a[i+1][j+1]==1)
                        noofneighbours++;

                    if( noofneighbours > maxneighbours)
                    {
                        maxneighbours=noofneighbours;
                        maxx=i;
                        maxy=j;
                        cal=(((maxx-samx)*(maxx-samx)) +  ((maxy-samy)*(maxy-samy)));
                        distance=sqrt(cal);
                    }

                    else if( noofneighbours == maxneighbours )
                    {
                        cal=( ( (maxx-samx)*(maxx-samx)) +  ((maxy-samy)*(maxy-samy)));
                        newdistance=sqrt(cal);

                        if( newdistance < distance )
                        {
                            maxx=i;
                            maxy=j;
                        }
                    }

                }


                else if(  (j==col-1)  && (a[i][j]==1) ) // for the last column
                {;
                    if(a[i][j-1]==1)
                        noofneighbours++;
                    if(a[i+1][j-1]==1)
                        noofneighbours++;
                    if(a[i+1][j]==1)
                        noofneighbours++;
                    if( noofneighbours > maxneighbours)
                    {
                        maxneighbours=noofneighbours;
                        maxx=i;
                        maxy=j;
                        cal=(((maxx-samx)*(maxx-samx)) +  ((maxy-samy)*(maxy-samy)));
                        distance=sqrt(cal);
                    }

                    else if( noofneighbours == maxneighbours )
                    {
                        cal=( ( (maxx-samx)*(maxx-samx)) +  ((maxy-samy)*(maxy-samy)));
                        newdistance=sqrt(cal);

                        if( newdistance < distance )
                        {
                            maxx=i;
                            maxy=j;
                        }
                    }

                }

                else if (a[i][j]==0)
                {
                }
                else // for the remaining cases
                {

                    if(a[i][j-1]==1)
                        noofneighbours++;
                    if(a[i][j+1]==1)
                        noofneighbours++;
                    if(a[i-1][j-1]==1)
                        noofneighbours++;
                    if(a[i-1][j]==1)
                        noofneighbours++;
                    if(a[i-1][j+1]==1)
                        noofneighbours++;
                    if(a[i+1][j]==1)
                        noofneighbours++;
                    if(a[i+1][j-1]==1)
                        noofneighbours++;
                    if(a[i+1][j+1]==1)
                        noofneighbours++;

                    if( noofneighbours > maxneighbours)
                    {
                        maxneighbours=noofneighbours;
                        maxx=i;
                        maxy=j;
                        cal=(((maxx-samx)*(maxx-samx)) +  ((maxy-samy)*(maxy-samy)));
                        distance=sqrt(cal);
                    }

                    else if( noofneighbours == maxneighbours )
                    {
                        cal=( ( (maxx-samx)*(maxx-samx)) +  ((maxy-samy)*(maxy-samy)));
                        newdistance=sqrt(cal);

                        if( newdistance < distance )
                        {
                            maxx=i;
                            maxy=j;
                        }
                    }
                }


            }//close of else
        }//close of for loop j
    }//close of for loop i
    printf("ans: \n");
    printf("%d:%d:%d",maxx+1,maxy+1,maxneighbours);


}//close of main
