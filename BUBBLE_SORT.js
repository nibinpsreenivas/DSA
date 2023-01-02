function bSort(a)
{
     
     console.log("element before sort");
     console.log(a);
      
      for(var i = 0; i < a.length; i++)
      {
           for(var j = 0; j < ( a.length - i -1 ); j++)
          {
              if(a[j] <= a[j+1])
              {
                  var temp = a[j];
                  a[j] = a[j+1];
                  a[j+1] = temp;
              }
           }
       }
 console.log("element after sort");
 console.log(a);
}
 
var a = [1,2,3,4,5,6];
bSort(a);
