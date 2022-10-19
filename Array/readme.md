
# ARRAYS

 An array is a collection of items of same data type stored at contiguous memory locations. 

 ## Syntax for declaring an array is:
       datatype array-name[size];
       example for int Data Type 
       ie:= int arr[5]
       
 Some basics operations can be performed in an array.
 The Operations which can be performed are as follows: 
 1. Traversal
 2. Insertion
 3. Deletion


# SAMPLE ARRAY



 # Algorithm of array operations

* START OF THE PROGRAM
* Create an array of fixed size i.e the maximum capacity/elements the array can store.
* Input the size of array you want to create & the elements of array from the user.
* Create a traversal function which takes array & size of the array as its arguments so that every element of the array can be traversed as well as printed(with the help of for loop which iterate with the size of array).
* For Insertion, create an insert function i.e insert(array,new element,index of new element,size,capacity). Check the condition whether element can be inserted or not & if the index number is valid or not.If yes, then insert the new element by shifting the previous elements in forward direction & put the new element at the required index
*       for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
* For Deletion, create a delete function which takes array, size & index as arguments. Deletion can be done directly by shifting the elements in backward direction from the index number
*        for (int i = index; i < size - 1; i++)
         {
             arr[i] = arr[i + 1];
         }
* In order to Search elements in the Array, there are 2 methods i.e LINEAR SEARCH ALGORITHM & another is BINARY SEARCH ALGORITHM.
# SEARCH -
* In this algorithm, a sequential search is made over all elements one by one & if a match is found(i.e key==element),then index of that element is returned.
*        for (int i = 0; i < size; i++)
         {
              if (arr[i] == key)
              {
                return i;
              }
         }



## Example of Array:
*            SAMPLE INPUT -  arr[10]={1,2,3,4,5};
            Traversal-> traversal(arr,size);
                        O/P- 1  2  3  4  5 
	    Insertion-> insert(arr, new element, index, size, capacity); 
	                (let new element be 9 & index be 2)
	                O/P- 1  2  9  3  4  5
	    Deletion->  delete(arr,size,index);
	                (let index=1)
			 O/P- 1  9  3  4  5
	 
## Time complexity of various operations:

For **TRAVERSAL**-

**Time complexity is** O(n).

For **INSERTION**-
* **Best Case Time Complexity is** O(1)
* **Worst Case Time Complexity is** O(n)

For **DELETION**-
* **Best Case Time Complexity is** O(1)
* **Worst Case Time Complexity is** O(n)

 # Reversing of Array

## Reverse

<img width="605" alt="image" src="https://user-images.githubusercontent.com/88760648/196731065-02d3f86b-d5e5-4f28-a1dd-9877347570a2.png">

### Algorithm

* Take input the size of the array and the elements of the array.
* Consider a function reverse1 which takes the parameters-the array(say arr) and the size of the array(say n).
* Inside the function, a new array (with the array size of the first array, arr) is initialized. The array arr[] is iterated from the first element, and each element of array arr[] is placed in the new array from the back, i.e., the new array is iterated from its last element.
* In this way, all the elements of the array arr[] are placed reversely in the new array.
* Further, we can iterate through the new array from the beginning and print the elements of the array.

### Properties
Time-complexity-->O(n)
Space-complexity-->O(n)


