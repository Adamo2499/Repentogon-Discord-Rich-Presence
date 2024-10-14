#include "GameInfoStrings.h"
#include "ConfigHandler.h"

char* stageToTitle(int stb) {
	switch (stb) {
	case 1:
		return "Running from Mom in the Basement";
	case 2:
		return "Hiding from spiders in Cellar";
	case 3:
		return "Catching aflame in Burning Basement";
	case 4:
		return "Excavating the Caves";
	case 5:
		return "Exploring the Catacombs";
	case 6:
		return "Drowning in the Flooded Caves";
	case 7:
		return "Fighting off monsters in the Depths";
	case 8:
		return "Paying respects in the Necropolis";
	case 9:
		return "Stumbling through Dank Depths";
	case 10:
		return "Visiting their future's past in Womb";
	case 11:
		return "Bursting veins in Utero";
	case 12:
		return "Slaying their future's past in Scarred Womb";
	case 13:
		return "Dodging bullet hells against Hush";
	case 14:
		return "Dueling Satan in Sheol";
	case 15:
		return "Repenting in the Cathedral";
	case 16:
		return "Facing their fears in the Dark Room";
	case 17:
		return "Suffocating in the Chest";
	case 26:
		return "Suffering in the Void";
	case 27:
		return "Wishing they had an umbrella in Downpour";
	case 28:
		return "Sifting through sewage in Dross";
	case 29:
		return "Finding diamonds in Mines";
	case 30:
		return "Struggling to breathe in Ashpit";
	case 31:
		return "Fending off the dead in the Mausoleum";
	case 32:
		return "Avoiding pain in Gehenna";
	case 33:
		return "Decomposing in Corpse";
	case 34:
		return "mortis lol";
	case 35:
		return "Living in the light at Home";
	case 36:
		return "Returning home through the Ascent";
	default:
		return "Exploring the unknown depths below";
	}
}

char* moddedStageToTitle(const char* stageName) {
	if (!modOptions.Get("Customization", "ShowModdedStages")) {
		return "Exploring the unknown depths below";
	}

	std::string strStageName = std::string(stageName);

	// Fall From Grace
	if (strStageName == "Boiler" || strStageName == "Boiler 2" || strStageName == "Boiler XL") {
		return "Boiling in the Boiler";
	}

	if (strStageName == "Grotto" || strStageName == "Grotto 2" || strStageName == "Grotto XL")
	{
		return "Wading through the Grotto";
	}
	
	// Revelations
	if (strStageName == "Glacier" || strStageName == "Glacier 2" || strStageName == "Glacier XL") {
		return "Slipping through Glacier";
	}

	if (strStageName == "Tomb" || strStageName == "Tomb 2" || strStageName == "Tomb XL") {
		return "Raiding the Tomb";
	}

	// The Future
	if (strStageName == "The Future") {
		return "Seeing into The Future";
	}

	// Last Judgement
	if (strStageName == "Mortis" || strStageName == "Mortis 2" || strStageName == "Mortis XL")
	{
		return "Treading the silent path of Mortis";
	}

	// Fiend Folio
	if (strStageName == "Lab") {
		return "Unveiling mysteries in The Lab";
	}

	if (strStageName == "MorbusReal")
	{
		return "Escaping the contagion of Morbus";
	}

	if (strStageName == "Stony Level") {
		return "Enduring the rocky terrain of the Stony Level";
	}

	// Godmode Ascended
	if (strStageName == "FruitCellar") {
		return "Harvesting secrets in the Fruit Cellar";
	}

	if (strStageName == "TheNest") {
		return "Creeping through the twisted Nest";
	}

	if (strStageName == "Colon") {
		return "Traversing the gut of the Colon";
	}

	if (strStageName == "IvoryPalace") {
		return "Walking the halls of the Ivory Palace";
	}

	// Default
	return "Exploring the unknown depths below";
}