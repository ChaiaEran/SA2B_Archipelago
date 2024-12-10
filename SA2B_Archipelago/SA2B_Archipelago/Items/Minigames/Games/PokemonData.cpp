#include "../../../pch.h"

#include "PokemonData.h"



std::map<std::pair<PokemonType, PokemonType>, PokemonTypeMatchup> typeMatchupData =
{
	{std::make_pair(PokemonType::Normal,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Fire),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Water),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Grass),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Ice),			PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Fighting),	PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Poison),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Ground),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Flying),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Psychic),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Bug),			PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Rock),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Ghost),		PokemonTypeMatchup::NoEffect},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Dragon),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Dark),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Steel),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Normal,	 PokemonType::Fairy),		PokemonTypeMatchup::NeutralEffective},

	{std::make_pair(PokemonType::Fire,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Fire),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Water),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Grass),		PokemonTypeMatchup::SuperEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Ice),			PokemonTypeMatchup::SuperEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Fighting),	PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Poison),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Ground),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Flying),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Psychic),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Bug),			PokemonTypeMatchup::SuperEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Rock),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Ghost),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Dragon),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Dark),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Steel),		PokemonTypeMatchup::SuperEffective},
	{std::make_pair(PokemonType::Fire,	 PokemonType::Fairy),		PokemonTypeMatchup::NeutralEffective},

	{std::make_pair(PokemonType::Water,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Fire),		PokemonTypeMatchup::SuperEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Water),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Grass),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Ice),			PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Fighting),	PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Poison),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Ground),		PokemonTypeMatchup::SuperEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Flying),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Psychic),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Bug),			PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Rock),		PokemonTypeMatchup::SuperEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Ghost),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Dragon),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Dark),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Steel),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Water,	 PokemonType::Fairy),		PokemonTypeMatchup::NeutralEffective},

	{std::make_pair(PokemonType::Grass,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Fire),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Water),		PokemonTypeMatchup::SuperEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Grass),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Ice),			PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Fighting),	PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Poison),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Ground),		PokemonTypeMatchup::SuperEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Flying),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Psychic),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Bug),			PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Rock),		PokemonTypeMatchup::SuperEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Ghost),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Dragon),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Dark),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Steel),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Grass,	 PokemonType::Fairy),		PokemonTypeMatchup::NeutralEffective},

	{std::make_pair(PokemonType::Electric,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Fire),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Water),		PokemonTypeMatchup::SuperEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Grass),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Electric),	PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Ice),			PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Fighting),	PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Poison),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Ground),		PokemonTypeMatchup::NoEffect},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Flying),		PokemonTypeMatchup::SuperEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Psychic),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Bug),			PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Rock),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Ghost),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Dragon),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Dark),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Steel),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Electric,	 PokemonType::Fairy),		PokemonTypeMatchup::NeutralEffective},

	{std::make_pair(PokemonType::Ice,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Ice,	 PokemonType::Fire),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Ice,	 PokemonType::Water),		PokemonTypeMatchup::NotVeryEffective},
	{std::make_pair(PokemonType::Ice,	 PokemonType::Grass),		PokemonTypeMatchup::SuperEffective},
	{std::make_pair(PokemonType::Ice,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Ice,	 PokemonType::Ice),			PokemonTypeMatchup::NotVeryEffective },
	{std::make_pair(PokemonType::Ice,	 PokemonType::Fighting),	PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Ice,	 PokemonType::Poison),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Ice,	 PokemonType::Ground),		PokemonTypeMatchup::SuperEffective },
	{std::make_pair(PokemonType::Ice,	 PokemonType::Flying),		PokemonTypeMatchup::SuperEffective },
	{std::make_pair(PokemonType::Ice,	 PokemonType::Psychic),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Ice,	 PokemonType::Bug),			PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Ice,	 PokemonType::Rock),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Ice,	 PokemonType::Ghost),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Ice,	 PokemonType::Dragon),		PokemonTypeMatchup::SuperEffective },
	{std::make_pair(PokemonType::Ice,	 PokemonType::Dark),		PokemonTypeMatchup::NeutralEffective},
	{std::make_pair(PokemonType::Ice,	 PokemonType::Steel),		PokemonTypeMatchup::NotVeryEffective },
	{std::make_pair(PokemonType::Ice,	 PokemonType::Fairy),		PokemonTypeMatchup::NeutralEffective},

	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Normal),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Fire),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Water),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Grass),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Ice),			PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Fighting),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Poison),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Ground),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Flying),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Psychic),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Bug),			PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Rock),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Ghost),		PokemonTypeMatchup::NoEffect },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Dragon),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Dark),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Steel),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Fighting,	 PokemonType::Fairy),		PokemonTypeMatchup::NotVeryEffective },

	{ std::make_pair(PokemonType::Poison,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Fire),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Water),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Grass),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Ice),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Fighting),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Poison),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Ground),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Flying),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Psychic),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Bug),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Rock),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Ghost),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Dragon),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Dark),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Steel),		PokemonTypeMatchup::NoEffect },
	{ std::make_pair(PokemonType::Poison,	 PokemonType::Fairy),		PokemonTypeMatchup::SuperEffective },

	{ std::make_pair(PokemonType::Ground,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Fire),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Water),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Grass),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Electric),	PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Ice),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Fighting),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Poison),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Ground),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Flying),		PokemonTypeMatchup::NoEffect },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Psychic),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Bug),			PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Rock),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Ghost),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Dragon),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Dark),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Steel),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Ground,	 PokemonType::Fairy),		PokemonTypeMatchup::NeutralEffective },

	{ std::make_pair(PokemonType::Flying,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Fire),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Water),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Grass),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Electric),	PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Ice),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Fighting),	PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Poison),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Ground),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Flying),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Psychic),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Bug),			PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Rock),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Ghost),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Dragon),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Dark),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Steel),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Flying,	 PokemonType::Fairy),		PokemonTypeMatchup::NeutralEffective },

	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Fire),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Water),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Grass),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Ice),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Fighting),	PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Poison),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Ground),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Flying),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Psychic),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Bug),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Rock),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Ghost),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Dragon),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Dark),		PokemonTypeMatchup::NoEffect },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Steel),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Psychic,	 PokemonType::Fairy),		PokemonTypeMatchup::NeutralEffective },

	{ std::make_pair(PokemonType::Bug,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Fire),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Water),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Grass),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Ice),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Fighting),	PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Poison),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Ground),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Flying),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Psychic),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Bug),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Rock),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Ghost),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Dragon),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Dark),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Steel),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Bug,	 PokemonType::Fairy),		PokemonTypeMatchup::NotVeryEffective },

	{ std::make_pair(PokemonType::Rock,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Fire),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Water),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Grass),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Ice),			PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Fighting),	PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Poison),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Ground),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Flying),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Psychic),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Bug),			PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Rock),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Ghost),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Dragon),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Dark),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Steel),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Rock,	 PokemonType::Fairy),		PokemonTypeMatchup::NeutralEffective },

	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Normal),		PokemonTypeMatchup::NoEffect },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Fire),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Water),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Grass),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Ice),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Fighting),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Poison),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Ground),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Flying),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Psychic),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Bug),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Rock),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Ghost),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Dragon),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Dark),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Steel),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Ghost,	 PokemonType::Fairy),		PokemonTypeMatchup::NeutralEffective },

	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Fire),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Water),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Grass),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Ice),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Fighting),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Poison),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Ground),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Flying),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Psychic),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Bug),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Rock),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Ghost),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Dragon),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Dark),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Steel),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Dragon,	 PokemonType::Fairy),		PokemonTypeMatchup::NoEffect },

	{ std::make_pair(PokemonType::Dark,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Fire),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Water),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Grass),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Ice),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Fighting),	PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Poison),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Ground),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Flying),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Psychic),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Bug),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Rock),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Ghost),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Dragon),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Dark),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Steel),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Dark,	 PokemonType::Fairy),		PokemonTypeMatchup::NotVeryEffective },

	{ std::make_pair(PokemonType::Steel,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Fire),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Water),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Grass),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Electric),	PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Ice),			PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Fighting),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Poison),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Ground),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Flying),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Psychic),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Bug),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Rock),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Ghost),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Dragon),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Dark),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Steel),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Steel,	 PokemonType::Fairy),		PokemonTypeMatchup::SuperEffective },

	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Normal),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Fire),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Water),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Grass),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Electric),	PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Ice),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Fighting),	PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Poison),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Ground),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Flying),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Psychic),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Bug),			PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Rock),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Ghost),		PokemonTypeMatchup::NeutralEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Dragon),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Dark),		PokemonTypeMatchup::SuperEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Steel),		PokemonTypeMatchup::NotVeryEffective },
	{ std::make_pair(PokemonType::Fairy,	 PokemonType::Fairy),		PokemonTypeMatchup::NeutralEffective },
};


std::array<PokemonData, 32> allPokemon =
{
	PokemonData(MGI_Aron,		std::string("Aron"),		3,	PokemonType::Steel,		PokemonType::Rock),
	PokemonData(MGI_Bulbasaur,	std::string("Bulbasaur"),	3,	PokemonType::Grass,		PokemonType::Poison),
	PokemonData(MGI_Charjabug,	std::string("Charjabug"),	3,	PokemonType::Bug,		PokemonType::Electric),
	PokemonData(MGI_Charmander,	std::string("Charmander"),	3,	PokemonType::Fire,		PokemonType::No_Type),
	PokemonData(MGI_Ditto,		std::string("Ditto"),		3,	PokemonType::Normal,	PokemonType::No_Type),
	PokemonData(MGI_Dratini,	std::string("Dratini"),		3,	PokemonType::Dragon,	PokemonType::No_Type),
	PokemonData(MGI_Flamigo,	std::string("Flamigo"),		3,	PokemonType::Flying,	PokemonType::Fighting),
	PokemonData(MGI_Goomy,		std::string("Goomy"),		3,	PokemonType::Dragon,	PokemonType::No_Type),
	PokemonData(MGI_Grimer,		std::string("Grimer"),		3,	PokemonType::Poison,	PokemonType::No_Type),
	PokemonData(MGI_Haunter,	std::string("Haunter"),		3,	PokemonType::Ghost,		PokemonType::Poison),
	PokemonData(MGI_Litwick,	std::string("Litwick"),		3,	PokemonType::Ghost,		PokemonType::Fire),
	PokemonData(MGI_Phantump,	std::string("Phantump"),	3,	PokemonType::Ghost,		PokemonType::Grass),
	PokemonData(MGI_Piplup,		std::string("Piplup"),		3,	PokemonType::Water,		PokemonType::No_Type),
	PokemonData(MGI_Pooper,		std::string("Pooper"),		3,	PokemonType::Poison,	PokemonType::Ground),
	PokemonData(MGI_Porygon,	std::string("Porygon"),		3,	PokemonType::Normal,	PokemonType::No_Type),
	PokemonData(MGI_Roggenrola,	std::string("Roggenrola"),	3,	PokemonType::Rock,		PokemonType::No_Type),
	PokemonData(MGI_Shuckle,	std::string("Shuckle"),		3,	PokemonType::Bug,		PokemonType::Rock),
	PokemonData(MGI_Sinistea,	std::string("Sinistea"),	3,	PokemonType::Ghost,		PokemonType::No_Type),
	PokemonData(MGI_Snom,		std::string("Snom"),		3,	PokemonType::Ice,		PokemonType::Bug),
	PokemonData(MGI_Spiritomb,	std::string("Spiritomb"),	3,	PokemonType::Ghost,		PokemonType::Dark),
	PokemonData(MGI_Sudowoodo,	std::string("Sudowoodo"),	3,	PokemonType::Rock,		PokemonType::No_Type),
	PokemonData(MGI_Surskit,	std::string("Surskit"),		3,	PokemonType::Bug,		PokemonType::Water),
	PokemonData(MGI_Tatsugiri,	std::string("Tatsugiri"),	3,	PokemonType::Dragon,	PokemonType::Water),
	PokemonData(MGI_Togepi,		std::string("Togepi"),		3,	PokemonType::Fairy,		PokemonType::No_Type),
	PokemonData(MGI_Chansey,	std::string("Chansey"),		3,	PokemonType::Fairy,		PokemonType::No_Type),
	PokemonData(MGI_UnownQue,	std::string("Unown ?"),		3,	PokemonType::Psychic,	PokemonType::No_Type),
	PokemonData(MGI_UnownX,		std::string("UnownX"),		3,	PokemonType::Psychic,	PokemonType::No_Type),
	PokemonData(MGI_Wailmer,	std::string("Wailmer"),		3,	PokemonType::Water,		PokemonType::No_Type),
	PokemonData(MGI_Wooper,		std::string("Wooper"),		3,	PokemonType::Water,		PokemonType::Ground),
	PokemonData(MGI_Wugtrio,	std::string("Wugtrio"),		3,	PokemonType::Water,		PokemonType::No_Type),
	PokemonData(MGI_Shroomish,	std::string("Shroomish"),	3,	PokemonType::Grass,		PokemonType::No_Type),
	PokemonData(MGI_Suicune,	std::string("Suicune"),		3,	PokemonType::Water,		PokemonType::No_Type),
};
