using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Game
{
    #region 인터페이스
    // 클래스 내의 구성요소들의 구현부가 없고,
    // 선언부의 집합으로만 이루어진 클래스입니다.
    public interface IEffect
    {
        // 인터페이스는 멤버 변수를 사용할 수 없습니다.
        public void Use();
    }
    #endregion

    #region 추상 클래스
    public abstract class Weapon
    {
        protected int attack;

        // 추상 함수
        public abstract void Attack();

        // 일반 함수
        public void Information()
        {
            Console.WriteLine("Weapon 클래스");
        }
    }
    #endregion

    public class Sword : Weapon, IEffect
    {
        public Sword()
        {
            attack = 10;
            Console.WriteLine("공격력 : " + attack);
        }

        public override void Attack()
        {
            Console.WriteLine("검으로 공격");
        }

        // 상위 클래스에서 구현된 함수를 감추고, 하위 클래스에서
        // 구현된 함수를 보여주는 것입니다.
        //new public void Attack()
        //{
        //    Console.WriteLine("검으로 공격");
        //    Use();
        //}


        public void Use()
        {
            Console.WriteLine("불꽃 발사!");
        }
    }

    public class Armor
    {
        private int defense;

        // 깊은 복사 
        // 객체를 복사해서 새로운 객체를 만들어내는 것입니다.
        public Armor DeepCopy()
        {
            Armor armor = new Armor();
            armor.defense = defense;

            return armor;
        }

        public int Defense
        {
            set { defense = value; }
            get { return defense; }
        }

    }


    internal class Abstract
    {
        static void Main(string[] args)
        {
            #region 인터페이스 
            // Weapon weapon = new Weapon();
            // weapon.Attack();
            // 
            // Sword sword = new Sword();
            // sword.Attack();
            // 
            // IEffect ieffect = sword;
            // ieffect.Use();
            #endregion

            #region 얕은 복사와 깊은 복사
            // 얕은 복사는 객체의 참조만 복사하는 것입니다.
            // Armor armor1 = new Armor();
            // armor1.Defense = 35;
            // 
            // // 객체를 얕은 복사하게 되면 스택에 있는 참조를 복사하는 것입니다.
            // Armor armor2 = armor1;
            // armor2.Defense = 65;
            // 
            // Armor armor3 = armor1.DeepCopy();
            // armor3.Defense = 95;
            // 
            // Console.WriteLine("armor1.Defense : " + armor1.Defense);
            // Console.WriteLine("armor2.Defense : " + armor2.Defense);
            // Console.WriteLine("armor3.Defense : " + armor3.Defense);
            #endregion

            #region 추상 클래스
            // Sword sword1 = new Sword();
            // 
            // Weapon weapon = sword1;
            // 
            // weapon.Attack();
            // weapon.Information();
            #endregion
        }

    }
}
