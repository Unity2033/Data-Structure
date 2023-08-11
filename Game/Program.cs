using System.ComponentModel;

namespace Game
{
    public class Cat
    {
        private int age;

        // 프로퍼티
        public int Age
        {
            get 
            { 
                return age;
            }
            set
            {
                if (value >= 10)
                {
                    age = 10;
                }
                else
                {
                    age = value;
                }
            }
        }
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            #region 박싱과 언박싱
            // 박싱 : 값 타입의 객체를 참조 타입으로 변환하는 작업입니다.
            // int data = 100;
            // 
            // // 박싱은 암묵적으로 형 변환이 발생합니다.
            // object obj = data; // Boxing 
            // Console.WriteLine("obj의 값 : " + obj);
            // 
            // // 언박싱 : 참조 타입을 값 타입으로 변환하는 작업입니다.
            // 
            // // 언박싱은 명시적 형 변환을 통해서 작업을 해야 합니다.
            // int x = (int)obj;
            // Console.WriteLine("x의 값 : " + x);

            // object [] array = new object[5];
            // 
            // array[0] = 10;
            // array[1] = 6.5f;
            // array[2] = 'A';
            // array[3] = true;
            // array[4] = "kim";
            // 
            // foreach(object element in array)
            // {
            //     Console.WriteLine(element);
            // 
            #endregion

            #region 프로퍼티
            // Cat cat = new Cat();
            // cat.Age = 3;
            // 
            // Console.WriteLine("cat의 나이 : " + cat.Age);
            #endregion

            #region 가비지 컬렉터
               // 프로그램이 동적으로 할당했던 메모리 영역 중에서 
               // 더 이상 참조되지 않은 메모리를 자동으로 해제하는 기능입니다.

            if(true)
            {
                int [] ints = new int[2];
            }


            #endregion
        }
    }
}