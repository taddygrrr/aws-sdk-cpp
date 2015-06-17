/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  /*
    <p> Describes the status of a parameter group. </p>
  */
  class AWS_REDSHIFT_API ClusterParameterGroupStatus
  {
  public:
    ClusterParameterGroupStatus();
    ClusterParameterGroupStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClusterParameterGroupStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p> The name of the cluster parameter group. </p>
    */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }
    /*
     <p> The name of the cluster parameter group. </p>
    */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /*
     <p> The name of the cluster parameter group. </p>
    */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /*
     <p> The name of the cluster parameter group. </p>
    */
    inline ClusterParameterGroupStatus&  WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /*
     <p> The name of the cluster parameter group. </p>
    */
    inline ClusterParameterGroupStatus& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}

    /*
     <p> The status of parameter updates. </p>
    */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }
    /*
     <p> The status of parameter updates. </p>
    */
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }

    /*
     <p> The status of parameter updates. </p>
    */
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }

    /*
     <p> The status of parameter updates. </p>
    */
    inline ClusterParameterGroupStatus&  WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}

    /*
     <p> The status of parameter updates. </p>
    */
    inline ClusterParameterGroupStatus& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}

  private:
    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet;
    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws