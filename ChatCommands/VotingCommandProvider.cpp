#include "VotingCommandProvider.hpp"

namespace ChatCommands
{
	void VotingCommandProvider::RegisterVariables(ICommandManager* manager)
	{
		VarEnabled = manager->Add(Command::CreateVariableInt("Voting", "Enabled", "voting_enabled", "End of game map voting", static_cast<CommandFlags>(eCommandFlagsArchived | eCommandFlagsReplicated), 0));
		VarEnabled->ValueIntMin = 0;
		VarEnabled->ValueIntMax = 1;

		VarRTVEnabled = manager->Add(Command::CreateVariableInt("Voting", "RTVEnabled", "voting_rtvenabled", "Midgame map voting", static_cast<CommandFlags>(eCommandFlagsArchived | eCommandFlagsReplicated), 0));
		VarRTVEnabled->ValueIntMin = 0;
		VarRTVEnabled->ValueIntMax = 1;

		VarRTVPercent = manager->Add(Command::CreateVariableInt("Voting", "RTVPercent", "voting_rtvpercent", "The percent of connected players needed for RTV to trigger", static_cast<CommandFlags>(eCommandFlagsArchived | eCommandFlagsReplicated), 75));
		VarRTVPercent->ValueIntMin = 0;
		VarRTVPercent->ValueIntMax = 100;

		VarVotingTime = manager->Add(Command::CreateVariableInt("Voting", "VotingTime", "voting_time", "How many seconds voting should last for", static_cast<CommandFlags>(eCommandFlagsArchived | eCommandFlagsReplicated), 60));		
	}
}