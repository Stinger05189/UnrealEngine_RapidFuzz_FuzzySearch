
# Unreal Engine RapidFuzz FuzzySearch Plugin

![RapidFuzz Library Icon](Resources/IconFull.png)
This plugin integrates the powerful string matching capabilities of the RapidFuzz C++ library into Unreal Engine 5.2, providing a seamless and efficient way to perform fuzzy string comparisons directly within the engine. RapidFuzz is a fast, MIT-licensed library designed for fuzzy string matching, offering various algorithms to calculate the similarity between sequences of characters.

## Overview

The RapidFuzz FuzzySearch plugin for Unreal Engine 5.2 enables developers to utilize advanced string matching algorithms directly in their projects. This wrapper library bridges the functionality of [RapidFuzz C++](https://github.com/rapidfuzz/rapidfuzz-cpp) into Unreal, making it ideal for applications requiring text analysis, search features, or any scenario where determining text similarity is beneficial.

## Features

This plugin exposes several functions from the RapidFuzz library to Blueprints and C++, allowing for various fuzzy string matching operations, including:

- **RapidFuzzRatio**: Computes how similar two strings are, returning a score from 0 to 100.
- **RapidFuzzPartialRatio**: Determines the similarity of the most similar substring.
- **RapidFuzzTokenSortRatio**: Measures similarity, ignoring token order.
- **RapidFuzzTokenSetRatio**: Assesses similarity considering token duplicity.
- **RapidFuzzPartialTokenSortRatio**: Evaluates partial match similarity, disregarding token order.
- **RapidFuzzPartialTokenSetRatio**: Calculates similarity for partial matches with token duplicity.
- **RapidFuzzWRatio**: Provides a weighted similarity score, combining various strategies.
- **RapidFuzzQRatio**: Offers a quick similarity assessment.
- **SortStringsBySimilarity**: Sorts strings by their direct similarity to a query, placing the closest matches first. Suitable for straightforward similarity-based ordering.
- **SortStringsByPartialSimilarity**: Sorts strings by resemblance to a reference text, prioritizing those with the most matching content. Ideal for highlighting partial matches in search results or filters.
- **SortStringsByPartialTokenSetSimilarity**: Sorts strings to prioritize those most similar to a query, effectively handling extra or shuffled words. Great for flexible 'best fit' searches.


Each function is designed to be easily accessible from both Blueprints and C++, making them versatile for numerous use cases.

## Getting Started

### Prerequisites

- Unreal Engine 5.2
- Basic knowledge of C++ and Unreal Engine's Blueprint system

### Installation

1. Clone the plugin into your project's `Plugins` directory:

   ```
   git clone https://github.com/<your-username>/UnrealEngine_RapidFuzz_FuzzySearch.git
   ```

2. Regenerate your project files and rebuild your project.
3. Enable the plugin from the Edit > Plugins menu within Unreal Engine Editor.

### Usage

To use the plugin in your project:

1. Include the plugin's header file in your C++ code:

   ```cpp
   #include "RapidFuzzFunctions.h"
   ```

2. Call any of the exposed functions in Blueprints or C++.


## Documentation

Detailed documentation for each function, including parameters and return values, can be found within the plugin's header files. Additionally, tooltips in Blueprints provide quick insights into each function's purpose and usage.

## Contributing

Contributions to improve the plugin or extend its functionality are welcome. Please follow the standard pull request process:

1. Fork the repository.
2. Create your feature branch (`git checkout -b feature/AmazingFeature`).
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`).
4. Push to the branch (`git push origin feature/AmazingFeature`).
5. Open a pull request.

## License

This plugin is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.

## Acknowledgments

- Thanks to the [RapidFuzz](https://github.com/rapidfuzz/rapidfuzz-cpp) project for providing the core string matching algorithms.
- Thanks to Unreal Engine for the platform to develop and integrate this plugin.
