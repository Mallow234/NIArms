
class CfgSoundSets
{
	class sg510_Shot_SoundSet
	{
		soundShaders[] = { "sg510_closeShot_SoundShader", "sg510_midShot_SoundShader", "sg510_distShot_SoundShader", "sg510_Closure_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class sg510_tail_SoundSet
	{
		soundShaders[] = { "sg510_tailDistant_SoundShader", "sg510_tailForest_SoundShader", "sg510_tailHouses_SoundShader", "sg510_tailInterior_SoundShader", "sg510_tailMeadows_SoundShader", "sg510_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class sg510_silencerShot_SoundSet
	{
		soundShaders[] = { "sg510_silencerShot_SoundShader", "sg510_Closure_SoundShader" };
		volumeFactor = 1.4;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class sg510_silencerTail_SoundSet
	{
		soundShaders[] = { "sg510_silencerTailTrees_SoundShader", "sg510_silencerTailForest_SoundShader", "sg510_silencerTailMeadows_SoundShader", "sg510_silencerTailHouses_SoundShader", "sg510_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
};
