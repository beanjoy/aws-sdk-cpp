﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API DeregisterVolumeRequest : public OpsWorksRequest
  {
  public:
    DeregisterVolumeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline DeregisterVolumeRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline DeregisterVolumeRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The AWS OpsWorks Stacks volume ID, which is the GUID that AWS OpsWorks Stacks
     * assigned to the instance when you registered the volume with the stack, not the
     * Amazon EC2 volume ID.</p>
     */
    inline DeregisterVolumeRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}

  private:

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
