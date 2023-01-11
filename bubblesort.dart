void main() 
{
  
  print("Decending order");
  var a = [1,2,3,4,5,6,7,8];
  var n1 = a.length;
  print("Before sort : ${a}");
    for (var i = 0; i < n1; i++) 
    {
      for (var j = 0; j < n1 - i - 1; j++) 
      {
         if (a[j] < a[j + 1]) 
         {
           var temp = a[j];
           a[j] = a[j + 1];
           a[j + 1] = temp;
         }
      }
     }
   print("After sort : ${a}");
  
  
  print("Acending order");
  
  print("Before sort : ${a}");
    for (var i = 0; i < n1; i++) 
    {
      for (var j = 0; j < n1 - i - 1; j++) 
      {
         if (a[j] > a[j + 1]) 
         {
           var temp = a[j];
           a[j] = a[j + 1];
           a[j + 1] = temp;
         }
      }
     }
  print("After sort : ${a}");
}
