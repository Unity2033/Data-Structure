using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp15
{
    internal class Marine : Terran
    {
        public Marine()
        {
            health = 40;
            maxHealth = health;
        }

        public override void Recovery()
        {
            health = maxHealth;
            Console.WriteLine("health : " + health);
        }
    }
}
