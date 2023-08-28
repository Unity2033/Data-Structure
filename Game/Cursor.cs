using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Game
{
  

    internal class Cursor
    {
        private int x;
        private int y;

        public Function function;

        public int X
        {
            get { return x; }
        }

        public int Y
        {
            get { return y; }
        }

        ConsoleKeyInfo consoleKey;

        public Cursor()
        {
            x = 0;
            y = 0;
        }

        public void Input()
        {
            Console.SetCursorPosition(x, y);

            consoleKey = Console.ReadKey();

            switch (consoleKey.Key)
            {
                case ConsoleKey.LeftArrow : if (x > 0)
                {
                    x -= 2;
                }
                break;
                case ConsoleKey.RightArrow : if (x < 8)
                {
                    x += 2;
                }
                break;
                case ConsoleKey.UpArrow : if (y > 0)
                {
                    y--;
                }
                break;
                case ConsoleKey.DownArrow : if (y < 2)
                {
                    y++;
                }
                break;

                case ConsoleKey.Spacebar : function();
                    break;
            }
        }

    }
}
