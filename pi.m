#!/usr/bin/octave -qf
% Octave implementation of Leibniz formula for pi
% 
% Octave complains about the name of the file shadowing a built-in function
% but we're not using that function, we're calculating our own pi value~

arg_list = argv();

if (nargin < 1)
    printf("Usage: %s <iterations>", program_name);
    exit;
endif

% I hope the default types are big enough
sum = 0.0;
iter = str2double(arg_list{1});
index = 0;

printf("Doing %d iterations.\n", iter);

% all the crunching happens here
for(index = 0:1:iter)
    sum = sum + 2.0/((4*index+1)*(4*index+3));
endfor

printf("The calculated value of pi is %.21f", (4.0*sum));
exit;
