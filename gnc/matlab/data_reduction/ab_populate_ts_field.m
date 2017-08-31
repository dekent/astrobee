% Copyright (c) 2017, United States Government, as represented by the
% Administrator of the National Aeronautics and Space Administration.
%
% All rights reserved.
%
% The Astrobee platform is licensed under the Apache License, Version 2.0
% (the "License"); you may not use this file except in compliance with the
% License. You may obtain a copy of the License at
%
%     http://www.apache.org/licenses/LICENSE-2.0
%
% Unless required by applicable law or agreed to in writing, software
% distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
% WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
% License for the specific language governing permissions and limitations
% under the License.

function dataStruct = ab_populate_ts_field(timeIn, dataIn, fieldName, dataStruct)
    %dataStruct = dataStruct;
    tempField             = timeseries(dataIn,timeIn);
    tempField.Name        = fieldName;
    tempField.TimeInfo.StartDate = '01/01/1970 00:00:00';
    dataStruct.(tempField.Name) = tempField; 
end