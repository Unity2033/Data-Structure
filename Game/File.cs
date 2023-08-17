using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Game
{
    public class Monster
    {
        public int hp;

        protected void Move()
        {
            Console.WriteLine("몬스터 이동");
        }
    }

    public class Goblin : Monster
    {
        #region base 키워드
        // 하위 클래스에서 상위 클래스의 속성과 기능을
        // 접근할 수 있는 지정자입니다.
        public Goblin()
        {
            hp = 100;
            base.Move();
        }
        #endregion

        new public void Move()
        {
            Console.WriteLine("고블린 이동");
        }
    }

    public class Slime : Monster
    {
        public Slime()
        {
            hp = 125;
        }
    }

    public class Skeleton : Monster
    {
        public Skeleton()
        {
            hp = 200;
        }
    }

    public class Damageable
    {
        public void Damage(Monster monster)
        {
            monster.hp -= 10;
        }
    }

    internal class File
    {
        static void Main(string[] args)
        {
            #region 업 캐스팅
            // Damageable damageable = new Damageable();
            // 
            // Goblin goblin = new Goblin();
            // Slime slime = new Slime();
            // Skeleton skeleton = new Skeleton();
            // 
            // Console.WriteLine("고블린의 체력 : " + goblin.hp);
            // Console.WriteLine("슬라임의 체력 : " + slime.hp);
            // Console.WriteLine("스켈레톤의 체력 : " + skeleton.hp);
            // 
            // damageable.Damage(goblin);
            // damageable.Damage(slime);
            // damageable.Damage(skeleton);
            // 
            // Console.WriteLine("고블린의 체력 : " + goblin.hp);
            // Console.WriteLine("슬라임의 체력 : " + slime.hp);
            // Console.WriteLine("스켈레톤의 체력 : " + skeleton.hp);
            #endregion

            #region 파일 입출력

            // 파일 쓰기
            // FileStream fileStream = new FileStream("data.txt", FileMode.Create);
            // 
            // StreamWriter streamWrite = new StreamWriter(fileStream);
            // 
            // streamWrite.Write("HELLO");
            // streamWrite.Write(25);
            // 
            // streamWrite.Close();

            // 파일 읽기
            // FileStream file = new FileStream("data.txt", FileMode.Open, FileAccess.Read);
            // StreamReader streamReader = new StreamReader(file);
            // 
            // Console.WriteLine(streamReader.ReadLine());
            // 
            // streamReader.Close();
            #endregion

            #region 최대 공약수
            // int x = int.Parse((Console.ReadLine()));
            // int y = int.Parse((Console.ReadLine()));
            // 
            // int result = 0;
            // 
            // for(int i = 1; i <= x && i <= y; i++)
            // {
            //     if(x % i == 0 && y % i == 0)
            //     {
            //         result = i;
            //     }
            // }
            // 
            // Console.WriteLine("최대 공약수 : " + result);
            #endregion
        }
    }
}
