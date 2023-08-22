using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4.Open_Closed
{
    public abstract class TerranUnit
    {
        public abstract void Speak();
    }

    public class Marine : TerranUnit
    {
        public override void Speak()
        {
            Console.WriteLine("마린 생성");
        }
    }

    public class FireBet : TerranUnit
    {
        public override void Speak()
        {
            Console.WriteLine("파이어벳 생성");
        }
    }

    public class Ghost : TerranUnit
    {
        public override void Speak()
        {
            Console.WriteLine("고스트 생성");
        }
    }

    public class Medic : TerranUnit
    {
        public override void Speak()
        {
            Console.WriteLine("메딕 생성");
        }
    }

    public class UnitManager
    {
        public void Create(TerranUnit unit)
        {
            unit.Speak();
        }
    }
}
