class TrunkCall
{
     int duration;
     TrunkCall(int d)
     {
          duration=d;
      }    
     double charge()
     {
          System.out.println("charge undefined");
          return 0;
      }    


}
class Ordinary extends TrunkCall
{
       Ordinary(int d)
       {
           super(d);
        }   
        double charge()
        {
             return duration*1.0;
         }    

}
class Urgent extends TrunkCall
{
     Urgent(int d)
     {
         super(d);
      }
      double charge()
      {
          return duration*2.0;
          }   

}
class Lightning extends TrunkCall
{
    Lightning(int d)
     {
         super(d);
      }
      double charge()
      {
          return duration*3.0;
          }   

}
class TrunkDemo
{
     public static void main(String args[])
     {
            Ordinary ord = new Ordinary(50);
            Urgent urg = new Urgent(40);
            Lightning lgt = new Lightning(55);
            
            System.out.println("the charge of ordinary call is " +ord.charge());
            System.out.println("the charge of urgent call is " +urg.charge());
            System.out.println("the charge of lightning call is " +lgt.charge());
       }
       }
