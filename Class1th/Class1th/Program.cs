namespace Class1th
{
    internal class Program
    {
        // static void Main(string [] args)
        // 프로그램의 진입점 역할을 수행하는 함수입니다.

        // Main() 프로젝트 내에서 단 하나만 존재해야 합니다.
        static void Main(string[] args)
        {
            #region 자료형
            // 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.

            // 자로형은 각각의 자료형마다 크기가 정해져 있으며, 자료형의 크기는
            // 바이트 단위로 이루어져 있습니다.

            // 자료형의 경우 자료형에 따라 저장할 수 있는 값의 종류와 범위가 결정됩니다.
            #endregion

            #region 변수
            // 데이터를 저장할 수 있는 메모리 공간을 생성하는 것입니다.

            //bool boolean = true;     // bool    : 1 byte 

            //char character = 'A';    // char    : 1 byte

            //int integer = 100;       // int     : 4 byte  

            //float health = 3.15f;    // float   : 4 byte

            //double attack = 14.5;    // double  : 8 byte

            //// 변수를 생성하게 되면 변수는 메모리 공간을 가지게 됩니다.
            //Console.WriteLine("boolean 변수의 값 : " + boolean);
            //Console.WriteLine("character 변수의 값 : " + character);
            //Console.WriteLine("integer 변수의 값 : " + integer);
            //Console.WriteLine("health 변수의 값 : " + health);
            //Console.WriteLine("attack 변수의 값 : " + attack);

            //// 변수의 메모리 공간은 프로그램이 실행될 때마다 바뀌며, 여러 개의
            //// 변수가 있을 때 서로 고유의 메모리 공간을 가지고 있습니다.

            //boolean = false;
            //character = 'B';
            //integer = 50;
            //health = 1.87f;
            //attack = 99.8;

            //// 메모리 공간으로 해당 메모리에 저장된 값을 참조할 수 있으며,
            //// 변수를 생성하기 위해 메모리 공간의 크기를 지정해주는 자료형을
            //// 먼저 선언해주어야 합니다.

            //Console.WriteLine("boolean 변수의 값 : " + boolean);
            //Console.WriteLine("character 변수의 값 : " + character);
            //Console.WriteLine("integer 변수의 값 : " + integer);
            //Console.WriteLine("health 변수의 값 : " + health);
            //Console.WriteLine("attack 변수의 값 : " + attack);

            // 변수는 프로그램이 실행되는 동안 값을 바꿀 수 있으며,
            // 원래 저장되어 있는 값은 새로 저장되는 값에 의해 지워집니다.

            #endregion

            #region 변수의 이름 규칙

            // 1. 변수의 이름은 중복이 허용되지 않습니다.
            //ex) int data;
            //ex) int data;

            // 2. 변수의 이름은 대소문자를 구분합니다.
            //ex) int value;
            //ex) int VALUE;

            // 3. 변수의 이름으로 예약어를 사용할 수 없습니다.
            //ex) int int;

            // 4. 변수의 이름으로 특수 기호는 "_"만 허용합니다.
            //ex) int _table = 200;

            // 5. 변수의 이름에 공백이 포함될 수 없습니다.
            //ex) int count down = 5;

            // 6. 변수의 이름은 숫자로 시작할 수 없으며, 컴파일하는 
            //    동안 어휘 분석에서 역 추적을 피할 수 있으므로,
            //    시작 위치에서만 숫자를 사용할 수 없습니다.
            
            //ex) int 1th;
            //ex) int class2th;

            #endregion
        }
    }
}

