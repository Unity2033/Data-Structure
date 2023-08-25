using ConsoleApp4.Dependency_Inversion;
using ConsoleApp4.Single_Responsibility;

namespace Game
{
    internal class Program
    {
        static void Main(string[] args)
        {
            static void Main(string[] args)
            {
                // □□□□□
                // □□□□□
                // □□□□□

                Inventory inventory = new Inventory(5, 3);

                Cursor cursor = new Cursor();

                inventory.AddItem(new Item(100, "포션"));
                inventory.AddItem(new Item(1000, "투구"));
                inventory.AddItem(new Item(750, "조합석"));

                while (true)
                {
                    inventory.Rendere();

                    cursor.Input();

                    Console.Clear();
                }
            }
        }
    }
}
