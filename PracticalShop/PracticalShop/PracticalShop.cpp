//=============================================================================
//
// Shop Practical
//
// Begin by working on the TODOs in the Item class first. 
// Then, move on to Inventory.cpp
// Finally, complete the TODOs within the PracticalShop.cpp file
//
//=============================================================================

// TODO: When all work is done in Item.cpp and Inventory.cpp uncomment the following line.
 #define INVENTORY

#include <iostream>
#include <vector>
#include "Console.h"
#include "Utility.h"
#ifdef INVENTORY
#include "Inventory.cpp"
#endif
#include "ShopUtils.cpp"

using namespace std;

int main()
{
#ifdef INVENTORY
    Item HealthPotion;
    HealthPotion.SetName("Health Potion");
    HealthPotion.SetCost(10);
    Item MagicPotion("Magic Potion", 15);
    Item IronDagger("Iron Dagger", 30);
    Item WoodenClub("Wooden Club", 20);
    Item DaedricHelm("Daedric Helm", 120);
    Item MageRobe("Mage Robe", 50);
    Item AkaviriKatana("Akaviri Katana", 200);
    Item WabbaJack("Wabbajack", 500);

    vector<Item> PlayerStarterItems = { HealthPotion, HealthPotion, MagicPotion, WoodenClub };
    vector<Item> StoreStartingItems = { HealthPotion, MagicPotion, MagicPotion, IronDagger,
                                    DaedricHelm, MageRobe, AkaviriKatana, WabbaJack };
#endif

    // TODO: Define an Inventory object for the player, and an Inventory object for the store. 

    Inventory PlayerInventory;
    Inventory StoreInventory;
    /* TODO: Prompt the user for their name
     * ======================================
     * Ask the user for their name and define a string for the
     * name. Store their input in the string. If they entered
     * an empty string (e.g. "") assign them a default name.
    */
    cout << "Hello and Welcome to Gizzies Market\n" << endl;
    cout << "What is your name?" << endl;
    string name;
    cout << "Name:  ";
    getline(std::cin, name);
    if (name == "")
    {
        name = "Doug";
        cout << "umm ok,Doug" << endl;

    }
    else
    {
        cout << "\n\n Welcome  " + name + " Please take a look around at my items!" << endl;
    }
    // TODO: Use the SetGold method to give the player inventory 200 Gold.
    PlayerInventory.SetGold(200);
    /* TODO: Call the AddItem method
     * ================================
     * Use the AddItem method to add each item in the
     * PlayerStartingItems array to the player's inventory.
     */
    {
        for (int i = 0; i < PlayerStarterItems.size(); i++)
        {
            PlayerInventory.AddItem(PlayerStarterItems[i]); }
    }
    // TODO: Use the SetGold method to give the store inventory 350 Gold.
    StoreInventory.SetGold(350);
    /* TODO: Call the AddItem method
     * ================================
     * Use the AddItem method to add each item in the
     * StoreStartingItems array to the store's inventory.
     */
    {
        for (int i = 0; i < StoreStartingItems.size(); i++)
        {
            StoreInventory.AddItem(StoreStartingItems[i]);
        }
        

    }

    while (true)
    {
        int sel = 0;
        do
        {
            Console::Clear();

            /* TODO: Call the ShopUtils::ShowInventories method
             * =================================================
             * Call the ShowInventories method located within the
             * ShopUtils class and pass in the player's name,
             * the player's inventory and the store's inventory.
             */

            ShopUtils::ShowInventories(name, PlayerInventory, StoreInventory);


            Console::SetCursorPosition(5, 18);

            const std::string menu = "What would you like to do?\n1) Buy\n2) Sell\n3) Leave\n_\b";
            Console::Write(menu);

            sel = Utility::ReadInt();

        } while (!Utility::IsReadGood() || (sel < 1 || sel > 3));

        if (3 == sel)
            break;

        bool doBuy = false;
        if (1 == sel)
        {
            doBuy = true;
        }

        /* TODO: Call the ShopUtils::DoTransaction method
         * =============================================
         * Call the DoTransaction method locate within the
         * ShopUtils class and pass it the player's name,
         * the player's inventory, the store's inventory
         * and the doBuy variable.
         */		 
        ShopUtils::DoTransaction(name, PlayerInventory, StoreInventory, doBuy);
    }

    Console::Clear();
    Utility::WriteCentered("Thanks! Come back again!");
    Utility::WaitForEnterKey();
}
