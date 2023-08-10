using System.ComponentModel;

namespace Game
{
    public class Function
    {
        #region 매개변수 한정자

        // ref : 호출되는 함수 내에서 매개 변수로 사용되는 변수의 값을
        //       영구적으로 변경하는 키워드입니다. 
       
        public void GetData(ref int x, ref int y)
        {
            x = 100;
            y = 200;
        }

        // out 키워드는 함수 내에서 초기화가 이루어져야 합니다.
        public void RayCast(out int damage)
        {
            damage = 100; 
        }

        // in 키워드는 인수가 참조로 되지만, 인수의 내용은 수정되지 않습니다.
        public void Information(in int data)
        {
            // data = 100; error
            Console.WriteLine(data);
        }

        #endregion

        #region 선택적 매개 변수
        // 함수를 선언 및 정의 할때 사용자가 미리 기본값을
        // 지정하는 매개 변수입니다.
     
        public void Default(int x = 10)
        {
            Console.WriteLine("x의 값 : " + x);
        }

        #endregion

        #region 명명된 매개 변수
        // 호출된 함수의 각 인수에 대한 매개 변수를 매개 변수의
        // 이름으로 지정할 수 있습니다.

        public void SetData(string name, char grade, int health)
        {
            Console.WriteLine("name : " + name);
            Console.WriteLine("grade : " + grade);
            Console.WriteLine("health : " + health);
        }
        #endregion
    }

    public class EventManager
    {
        public void Add(int x, int y)
        {
            Console.WriteLine(x + y);
        }

        public void Substarct(int x, int y)
        {
            Console.WriteLine(x - y);
        }

        public void Multiple(int x, int y)
        {
            Console.WriteLine(x * y);
        }

        public void Divide(int x, int y)
        {
            Console.WriteLine(x / y);
        }
    }

    internal class Program
    {
        delegate void Calculator(int x, int y);

        static void Main(string[] args)
        {
            #region 매개 변수 한정자
            // Function function = new Function();
            // 
            // int x = 10;
            // int y = 20;
            // int z;
            // 
            // // ref 키워드는 변수를 초기화해주어야 합니다.
            // function.GetData(ref x, ref y);
            // 
            // // out 키워드는 변수를 초기화해주지 않아도 됩니다.
            // function.RayCast(out z);
            // 
            // function.Information(z);
            // 
            // Console.WriteLine("x의 값 : " + x);
            // Console.WriteLine("y의 값 : " + y);


            #endregion

            #region 범위 기반 반복문

            // int [] array = new int [5] {1,2,3,4,5};
            // 
            // foreach(var element in array)
            // {
            //     Console.WriteLine(element);
            // }

            #endregion

            #region 명명된 매개 변수 및 선택적 매개 변수
            // Function function = new Function();
            // 
            // function.SetData(health : 10, name : "James", grade : 'A');
            // function.Default();
            #endregion

            #region 델리게이트
            // 델리게이트 목록에 실행할 함수들을 등록
            // 해놓으면 이 델리게이트가 등록된 함수를
            // 연쇄적으로 대신 실행시킬 수 있는 기능입니다.
            // Calculator calculator;
            // 
            // EventManager eventManager = new EventManager();
            // 
            // calculator = eventManager.Add;
            // calculator += eventManager.Substarct;
            // calculator += eventManager.Multiple;
            // calculator += eventManager.Divide;
            // 
            // calculator -= eventManager.Multiple;
            // calculator -= eventManager.Divide;
            // 
            // calculator(5, 5);


            #endregion
        }
    }
}