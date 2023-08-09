using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Game
{
    internal class Start
    {
        public class Monster
        {
            private int attack = 10;

            public void Attack()
            {
                Console.WriteLine("공격 " + attack + " 데미지 추가");
            }
        }

        internal class Program
        {
            static void Information()
            {
                Console.WriteLine("Program 클래스의 정보");
            }

            static void Main(string[] args)
            {
                // Console.WriteLine : 출력하는 함수입니다.
                Console.WriteLine("Hello, World!");
                Console.WriteLine("Hello, World!");

                Information();

                Monster monster = new Monster();
                monster.Attack();

            }
        }
    }
}
