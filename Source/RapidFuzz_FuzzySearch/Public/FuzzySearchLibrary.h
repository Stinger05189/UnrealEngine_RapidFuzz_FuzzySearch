// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FuzzySearchLibrary.generated.h"

/**
 * 
 */
UCLASS()
class RAPIDFUZZ_FUZZYSEARCH_API UFuzzySearchLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
		public:
    // Function to sort an array of strings based on similarity to a query string
    UFUNCTION(BlueprintCallable, Category = "RapidFuzz|StringMatching")
        static TArray<FString> SortStringsBySimilarity(const TArray<FString>& StringArray, const FString& Query);

    //Sorts an array of strings based on their partial similarity to a query string.
    UFUNCTION(BlueprintCallable, Category = "RapidFuzz|StringMatching")
        static TArray<FString> SortStringsByPartialSimilarity(const TArray<FString>& StringArray, const FString& Query);

    // Calculates the similarity ratio between two strings.
    UFUNCTION(BlueprintCallable, Category = "RapidFuzz|StringMatching")
        static float RapidFuzzRatio(const FString& Source, const FString& Target);

    // find the best partial match between strings, which can be useful for applications requiring leniency in matching.
    UFUNCTION(BlueprintCallable, Category = "RapidFuzz|StringMatching")
        static float RapidFuzzPartialRatio(const FString& Source, const FString& Target);

    // Computes the similarity ratio between strings after tokenizing, sorting, and rejoining the tokens, making it useful for comparisons where word order is not important.
    UFUNCTION(BlueprintCallable, Category = "RapidFuzz|StringMatching")
        static float RapidFuzzTokenSortRatio(const FString& Source, const FString& Target);

    // Similar to token_sort_ratio, but optimized for situations where duplicate words may be present and should not negatively impact the similarity score.
    UFUNCTION(BlueprintCallable, Category = "RapidFuzz|StringMatching")
        static float RapidFuzzTokenSetRatio(const FString& Source, const FString& Target);

    // Allows for partial matches in the context of tokenized, sorted, and rejoined strings, providing a more flexible comparison mechanism.
    UFUNCTION(BlueprintCallable, Category = "RapidFuzz|StringMatching")
        static float RapidFuzzPartialTokenSortRatio(const FString& Source, const FString& Target);

    // Combines the benefits of token set ratio calculations with the leniency of partial matching, suitable for applications requiring high tolerance in matching criteria.
    UFUNCTION(BlueprintCallable, Category = "RapidFuzz|StringMatching")
        static float RapidFuzzPartialTokenSetRatio(const FString& Source, const FString& Target);

    // Offers a weighted combination of various similarity ratios, tailored to achieve more accurate matching in complex scenarios.
    UFUNCTION(BlueprintCallable, Category = "RapidFuzz|StringMatching")
        static float RapidFuzzWRatio(const FString& Source, const FString& Target);

    // Provides a quick similarity ratio calculation, optimized for performance while still delivering reliable match scores.
    UFUNCTION(BlueprintCallable, Category = "RapidFuzz|StringMatching")
        static float RapidFuzzQRatio(const FString& Source, const FString& Target);

};
