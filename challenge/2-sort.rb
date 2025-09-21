###
# Sort integer arguments (ascending)
###

ints = ARGV.select { |arg| arg =~ /^-?\d+$/ }.map(&:to_i)

ints.sort!

puts ints
