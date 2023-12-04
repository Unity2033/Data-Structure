using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp15
{
    internal class Firebet : Terran
    {
        public Firebet()
        {
            health = 50;
            maxHealth = health;
        }

        public override void Recovery()
        {
            health = maxHealth;
            Console.WriteLine("health : " + health);
        }
    }
}
