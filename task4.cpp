#include <iostream>


int reverse_array(int array[],int size_of_array)
{

  int i,j=size_of_array-1,temp;
  for(i=0;i<j;i++)
  {
    while(true)
    {
      temp=array[i];
      array[i]=array[j];
      array[j]=temp;
      break;
    }
    j--;
  }
  for(i=0;i<size_of_array;i++)
  {
    std::cout<<array[i]<<std::endl;
  }
}

int rotate_array(int array[],int size_of_array)
{
  int i,j,temp,rotate;
  std::cout<<"enter rotations=";std::cin>>rotate;
  for(j=0;j<rotate;j++)
  {
    temp=array[0];
    for(i=0;i<size_of_array;i++)
    {
      array[i]=array[i+1];
    }
    array[size_of_array-1]=temp;
  }
  for(i=0;i<size_of_array;i++)
    std::cout<<array[i]<<std::endl;
}