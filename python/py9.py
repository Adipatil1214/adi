# Import necessary libraries
import pandas as pd
import numpy as np
import csv

# Import Toyota.csv file
df = pd.read_csv('Toyota.csv')

# Display DataFrame
print("DataFrame:")
print(df)

# Print the entire DataFrame
print("\nEntire DataFrame:")
print(df.to_string())

# Get the column labels of the DataFrame
print("\nColumn labels:")
print(df.columns)

# Total number of elements in the DataFrame
print("\nTotal number of elements:")
print(df.size)

# Dimensions of the DataFrame
print("\nDimension of DataFrame:")
print(df.shape)

# Number of dimensions
print("\nNumber of dimensions:")
print(df.ndim)

# Column labels of the DataFrame
print("\nColumn labels:")
print(df.columns)

# Data type of each column
print("\nData type of each column:")
print(df.dtypes)

# Summary of the DataFrame
print("\nSummary of DataFrame:")
print(df.info())

# Print specific columns: 'Price', 'Age', and 'FuelType'
print("\nSpecific columns 'Price', 'Age', and 'FuelType':")
print(df[['Price', 'Age', 'FuelType']])

# Print first 5 rows
print("\nFirst 5 rows:")
print(df.head())

# Print first 6 rows
print("\nFirst 6 rows:")
print(df.head(6))

# Print last 5 rows
print("\nLast 5 rows:")
print(df.tail())

# Print last 6 rows
print("\nLast 6 rows:")
print(df.tail(6))

# Print using numerical index first three rows
print("\nFirst three rows using numerical index:")
print(df.iloc[:3])

# Print using numerical index 3-10 rows
print("\nRows 3 to 10 using numerical index:")
print(df.iloc[3:10])

# Data at a specific location (row index 2, first column)
print("\nData at specific location [2,0]:")
print(df.iloc[2, 0])

# Drop first two rows
df = df.drop(index=[0, 1])
print("\nDataFrame after dropping first two rows:")
print(df)

# Checking unique values of variable 'Doors'
print("\nUnique values of 'Doors':")
print(df['Doors'].unique())

# Replace desired values
df.replace({'old_value': 'new_value'}, inplace=True)

# Replace non-numeric values in 'Doors'
mapping = {'four': 4, 'two': 2, 'three': 3}
df['Doors'] = df['Doors'].replace(mapping)
df['Doors'] = pd.to_numeric(df['Doors'], errors='coerce')
df.dropna(subset=['Doors'], inplace=True)
df['Doors'] = df['Doors'].astype('int64')

print("\nUnique values of 'Doors' after conversion:")
print(df['Doors'].unique())

# Find records where Price is more than 14000 and Age > 40
df1 = df[(df['Price'] > 14000) & (df['Age'] > 40)]
print("\nRecords where Price is more than 14000 and Age > 40:")
print(df1)

# Delete a column 'Age'
df = df.drop(columns=['Age'])
print("\nDataFrame after deleting 'Age' column:")
print(df)

# Statistical description of the DataFrame
print("\nStatistical description of the DataFrame:")
print(df.describe())

# Writing to CSV file
mydict = [
    {'name': 'Aditya', 'branch': 'IT', 'year': '2', 'cgpa': 9.3},
    {'name': 'Rahul', 'branch': 'CSE', 'year': '3', 'cgpa': 8.9},
]

# Field names
fields = ['name', 'branch', 'year', 'cgpa']

# Name of CSV file
filename = "university_records.csv"

# Writing to CSV file
with open(filename, 'w', newline='') as csvfile:
    # Creating a CSV DictWriter object
    writer = csv.DictWriter(csvfile, fieldnames=fields)

    # Writing headers (field names)
    writer.writeheader()

    # Writing data rows
    writer.writerows(mydict)

print("\nData written successfully to university_records.csv")
