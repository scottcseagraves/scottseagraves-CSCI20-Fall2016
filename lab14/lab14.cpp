 //Scott Seagraves
//10/12/2016
//debugging
 
 
 // Read in a series of grades, terminated by a -1.// Then output the average and minimum of those grades.
 #include <iostream> 
 using namespace std;
 
 int main() {   
 // Declare variables      
 double count=0;      
 double total=0;    
 int minimum=100;    
 int grade=0;       
 // Read numbers in until we see the -1   
 // Sum up grades as we do, and look for minimum      

     
 
 

 while (grade != -1) 
 {             
 cin >> grade;              
 if (grade != -1) 
 {total = total + grade; } 
  if (grade != -1)
 {count = count + 1; }               
 
 if (grade<minimum && grade!=-1) {
 minimum = grade;  } 
 }         // Output results      
 cout<< total;
 cout<< count;
 
 double average = total / count;      
 cout << "Average was " << average << endl;      
 cout << "Minimum was " << minimum << endl;      
 
 
 return 0;}