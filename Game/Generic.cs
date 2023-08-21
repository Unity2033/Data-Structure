using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Game
{
    #region 형식 매개 변수
    // 함수에 형식을 지정하지 않아도 호출 시에
    // 형식만 지정하여 사용하는 매개 변수입니다.
    class Deque<T> where T : class
    {
        // where T : struct 
        // T 형식을 값 형식만 받을 수 있도록 제한하는 것입니다.

        // where T : class
        // T 형식을 참조 형식으로만 받을 수 있도록 제한하는 것입니다.

        // where T : new()
        // T 형식을 기본 생성자가 있어야 하는 클래스로 받을 수 있도록 제한하는 것입니다.

        // where T : 클래스 이름
        // T 형식에 해당 클래스이거나 상속 받은 하위 클래스만 받을 수 있도록 제한하는 것입니다.

        // where T : 인터페이스 이름
        // T 형식은 인터페이스를 구현 클래스만 받을 수 있도록 제한하는 것입니다.


        private T data;
        // c++ template는 컴파일이 1번 일어나며, C# generic은
        // 컴파일이 2번 일어납니다.

        // c++ template은 사용하지 않으면 컴파일하지 않으며,
        // c# generic은 사용하지 않더라도 그에 관련된 정보를 
        // 저장하기 위한 metadata를 생성합니다.

        public Deque()
        {
            Console.WriteLine("Deque 생성");
        }

        public void Push(T data)
        {
            this.data = data;
        }
    }
    #endregion

    internal class Generic
    {
        static void Main(string[] args)
        {
            #region 일반화 프로그래밍
            // 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터 타입들을
            // 가질 수 있는 기술에 중점을 두어 재사용성을 높일 수 있는 프로그래밍 방식입니다.

            // Deque<object> deque = new Deque<object>();

            // deque.Push('A');
            // deque.Push('B');

            #region List
            // List<int> list = new List<int>();
            // 
            // list.Add(10);
            // list.Add(20);
            // list.Add(30);
            // list.Add(40);
            // list.Add(50);
            // 
            // Console.WriteLine(list.Capacity);
            // 
            // foreach (var element in list)
            // {
            //     Console.WriteLine(element);
            // }
            #endregion

            #region LinkedList
            // LinkedList<int> linkedList = new LinkedList<int>();
            // 
            // linkedList.AddLast(1);
            // linkedList.AddLast(2);
            // linkedList.AddLast(3);
            // 
            // linkedList.AddFirst(6);
            // linkedList.AddFirst(5);
            // linkedList.AddFirst(4);
            // 
            // foreach (var element in linkedList)
            // {
            //     Console.WriteLine(element);
            // }
            // 
            #endregion

            #region Dictionary
            /*
            Dictionary<string, int> dictionary = new Dictionary<string, int>();
            dictionary.Add("Sword", 10000);
            dictionary.Add("Gloves", 50000);
            dictionary.Add("Armor", 25000);

            dictionary.Remove("Armor");

            if (dictionary.ContainsKey("Armor"))
            {
                Console.WriteLine("KEY가 존재합니다.");
            }
            */
            #endregion

            #region Stack
            /*
            Stack<int> stack = new Stack<int>();

            stack.Push(10);
            stack.Push(20);
            stack.Push(30);
            stack.Push(40);

            stack.Pop();

            if (stack.Contains(40))
            {
                Console.WriteLine("값이 존재합니다.");
            }
            */
            #endregion

            #region 해시 테이블
            // Hashtable hashTable = new Hashtable();
            // hashTable.Add("One",10);
            // hashTable.Add("Second",20);
            #endregion

            #endregion
        }
    }
}
