namespace Game
{
    public class GameObject
    {
        // Run-Time 상수
        // 선언과 동시에 초기화를 하지 않아도 됩니다.
        readonly int itemID;

        // Compile-Time 상수
        // 선언과 동시에 초기화가 이루어져야 합니다.
        const float pi = 3.14f;

        public GameObject()
        {
            // readonly는 생성자에서 단 한 번만 초기화가 이루어집니다.
            itemID = 35641;
        } 
    }

    internal class Program
    {
        static void Function1()
        {
            Function2();
        }

        #region 스택 풀기
           // 예외가 발생한 함수에서 예외가 처리되지 않으면,
           // 상위 함수로 돌아가서 예외를 처리하는 과정입니다.
        static void Function2()
        {
            throw new Exception("My Exception");      
        }
        #endregion

        static void Main(string[] args)
        {
            #region 예외 처리
            //  int[] array = new int[3];
            //  
            //  try
            //  {
            //      // int x = 10;
            //      // int y = 0;
            //  
            //      // int result = x / y;
            //  
            //      //for(int i = 0; i < 5; i++)
            //      //{
            //      //    array[i] = i;
            //      //}
            //  
            //      Function1();
            //  
            //      Console.WriteLine("Console");
            //  }
            //  catch(Exception error)
            //  {
            //      Console.WriteLine(error);
            //  }
            //  finally
            //  {
            //      Console.WriteLine("Close");
            //  }
            #endregion

            #region 최소 공배수
           // int x = int.Parse(Console.ReadLine());
           // int y = int.Parse(Console.ReadLine());
           //
           // int result = 1;
           //
           // for (int i = 2; i <= x && i <= y; i++)
           // {
           //     if(x % i == 0 && y % i == 0)
           //     {
           //         result *= i;
           //         x /= i;
           //         y /= i;
           //
           //         i--;
           //     }
           // }
           //
           // Console.WriteLine(result * x * y);
            #endregion
        }
    }
}



