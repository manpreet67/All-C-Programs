import java.util.Scanner;
class MergeSorting
{
	public static void main(String[] args)
	{ 
	   Scanner sc = new Scanner(System.in);
	   System.out.println("Enter the size of array.");
	   int size_of_array = sc.nextInt();
       int Array[] = new int[size_of_array];
       System.out.println("Enter "+size_of_array+" elements.");
       for(int i=0;i<size_of_array;i++){
       	Array[i]=sc.nextInt();
       }
      MergeSorting obj = new MergeSorting();

       
       obj.mergeSort(Array,0,Array.length-1);
       obj.printArray(Array);
    

	}
    void  mergingBySorting(int array[],int left_index,int mid_index,int right_index)
    {
       int sizeOfSubArray1 = mid_index-left_index+1;
       int sizeOfSubArray2 = right_index-mid_index;
     int subArray1[] = new int[sizeOfSubArray1];
     int subArray2[] = new int[sizeOfSubArray2]; 
     for(int i=0;i<sizeOfSubArray1;i++)
     	{subArray1[i]=array[left_index+i];}
     for(int i=0;i<sizeOfSubArray2;i++)
     	{subArray2[i]=array[mid_index+i+1];}
    
    int  i=0; int j=0;int k=left_index;

    while(i<sizeOfSubArray1&&j<sizeOfSubArray2){
      if(subArray1[i]<=subArray2[j]){
       array[k++]=subArray1[i++];

      }
      else{
       array[k++]=subArray2[j++];

      }
    }

    while(i<sizeOfSubArray1)
    	{array[k++]=subArray1[i++];}

    while(j<sizeOfSubArray2)
    	{array[k++]=subArray2[j++];}

}

    void mergeSort(int array[],int left_index,int right_index){

    	int mid_index = (left_index+right_index)/2;
       if(left_index<right_index){
    	mergeSort(array,left_index,mid_index);
    	mergeSort(array,mid_index+1,right_index);
    	mergingBySorting(array,left_index,mid_index,right_index);
    }  
    }
    static void printArray(int array[]){	
    	System.out.println("Array is :");
    	for(int a:array){
    		System.out.println(a);
    	}

    }

}
