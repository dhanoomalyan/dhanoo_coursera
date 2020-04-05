/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */
int find_maximum(unsigned char *ptr,int count)
{
int i=0;
int max;
max=ptr[0];
if ( ptr == NULL){
    return 0;
  }
  
  if ( count <= 0 ) {
    count = 1;
  }
for(i=0;i<count;i++)
{
if(max<ptr[i])
max=ptr[i];
}
printf("\nMaximum element=");
print_statistics(max);
}
int find_minimum(unsigned char *ptr,int count)
{
int i=0;
int min;
min=ptr[0];
if ( ptr == NULL){
    return 0;
  }
  
  if ( count <= 0 ) {
    count = 1;
  }
for(i=0;i<count;i++)
{
if(min>ptr[i])
min=ptr[i];
}
printf("\nMinimum element=");
print_statistics(min);
}
int find_median(unsigned char *ptr,int count)
{
int a,b,n;
int median;
if ( ptr == NULL){
    return 0;
  }
  
  if ( count <= 0 ) {
    count = 1;
  }
n=count/2;
a=ptr[n-1];
b=ptr[n];
median=(a+b)/2;
printf("\nMedian=");
print_statistics(median);
}
int find_mean(unsigned char *ptr,int count)
{
int i=0;
int mean;
int sum=0;
if ( ptr == NULL){
    return 0;
  }
  
  if ( count <= 0 ) {
    count = 1;
  }
for(i = 0; i < count; i++){
    sum += *ptr;
    ptr++;
  }
mean=sum/count;
printf("\nMean=");
print_statistics(mean);
}
int sort_array(unsigned char *ptr,int count)
{
int i,j,temp;
for(i=0;i<count;i++)
{
for(j=i+1;j<count;j++)
{
if(ptr[i]<ptr[j])
{
temp=ptr[i];
ptr[i]=ptr[j];
ptr[j]=temp;
}
}
}
printf("\nArray of elements in descending order are:\n");
for(i=0;i<count;i++)
{
printf("%d\t",ptr[i],",");
}
}
int print_array(unsigned char *ptr,int count)
{
int i=0;
for(i=0;i<count;i++)
{
printf("%d\t",ptr[i]);
}
}
int print_statistics(int ans)
{
printf("%d\n",ans);
}
 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
