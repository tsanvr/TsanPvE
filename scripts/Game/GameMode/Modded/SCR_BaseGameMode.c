//modded class SCR_BaseGameMode
//{
//	override void OnGameStart()
//	{
//		super.OnGameStart();
//		if (Replication.IsServer())
//		{
//			Print ("Init: TSAN_GarbageCollect()");
//			GetGame().GetCallqueue().CallLater(TSAN_GarbageCollect,900000,true);
//		}		
//	}
//	private void TSAN_GarbageCollect()
//	{
//		Print ("Start: Execute TSAN_GarbageCollect()"); 
//		ChimeraWorld chimeraWorld = GetGame().GetWorld();
//		if (!chimeraWorld) return;	
//		GarbageSystem garbageSystem = GarbageSystem.Cast(chimeraWorld.FindSystem(GarbageSystem));
//		if (!garbageSystem) return;
//		garbageSystem.Flush();
//		Print ("End: Execute TSAN_GarbageCollect()");
//	}
//}
